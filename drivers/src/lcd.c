/************************************************************************************************
 * @file    lcd.c
 *
 * @brief   Source file for API for the LCD Display that uses an I2C expander
 *
 * @date    2025-09-28
 * @author  Midnight Sun Team #24 - MSXVI
 ************************************************************************************************/

/* Standard library Headers */
#include <stdint.h>
#include <string.h>

/* Inter-component Headers */

/* Intra-component Headers */
#include "lcd.h"

extern I2C_HandleTypeDef hi2c1;

static uint8_t s_function = 0;
static uint8_t s_control = 0;
static uint8_t s_mode = 0;
static uint8_t s_rows = 0;
static uint8_t s_backlight = LCD_BACKLIGHT_ON;

/**
 * @brief Send a command byte to the LCD. */
static void s_send_cmd(uint8_t cmd);

/** @brief Send a data byte (character) to the LCD. */
static void s_send_data(uint8_t data);

/** @brief Common 4-bit send routine (splits high/low nibbles, applies RS). */
static void s_send(uint8_t value, uint8_t rs_mask);

/** @brief Write one 4-bit nibble to the expander, then latch with E pulse. */
static void s_write4(uint8_t nibble);

/** @brief Write raw byte to expander (adds backlight bit). */
static void s_expander_write(uint8_t data);

/** @brief Generate E high->low strobe. */
static void s_pulse_enable(uint8_t latched);

/** @brief Prepare cycle counter for sub-micro delays. */
static void s_delay_init(void);

/** @brief Busy-wait microseconds using DWT cycle counter. */
static void s_delay_us(uint32_t us);

/* Example custom chars — safe to leave or remove. */
static const uint8_t s_special0[8] = {0b00000, 0b11001, 0b11011,
                                      0b00110, 0b01100, 0b11011,
                                      0b10011, 0b00000}; /* % */
static const uint8_t s_special1[8] = {0b11000, 0b11000, 0b00110,
                                      0b01001, 0b01000, 0b01001,
                                      0b00110, 0b00000}; /* Degrees celsius */

/* API */

void lcd_init(uint8_t rows) {
  s_rows = rows;
  s_backlight = LCD_BACKLIGHT_ON;

  /* Base: 4-bit, 1-line, 5x8 dots; will OR in 2-line if needed */
  s_function = LCD_4BITMODE | LCD_1LINE | LCD_5x8DOTS;
  if (s_rows > 1) {
    s_function |= LCD_2LINE;
  } else {
    /* Many modules ignore 5x10 in 1-line mode; this mirrors prior behavior */
    s_function |= LCD_5x10DOTS;
  }

  /* Power-up wait */
  s_delay_init();
  HAL_Delay(50);

  /* Ensure expander is alive and backlight state is pushed */
  s_expander_write(0x00);
  HAL_Delay(1);

  /* 4-bit init sequence (datasheet) */
  s_write4(0x03 << 4);
  s_delay_us(4500);
  s_write4(0x03 << 4);
  s_delay_us(4500);
  s_write4(0x03 << 4);
  s_delay_us(4500);
  s_write4(0x02 << 4); /* switch to 4-bit */
  s_delay_us(100);

  /* Function set */
  s_send_cmd(LCD_CMD_FUNCTIONSET | s_function);

  /* Display control: display on, cursor/blink off (default) */
  s_control = LCD_DISPLAY_ON | LCD_CURSOR_OFF | LCD_BLINK_OFF;
  lcd_display();
  lcd_clear();

  /* Entry mode: left-to-right, no shift */
  s_mode = LCD_ENTRY_LEFT | LCD_ENTRY_SHIFT_DECREMENT;
  s_send_cmd(LCD_CMD_ENTRYMODESET | s_mode);
  s_delay_us(4500);

  /* Optional: load two example custom glyphs */
  lcd_create_special_char(0, (uint8_t *)s_special0);
  lcd_create_special_char(1, (uint8_t *)s_special1);

  lcd_home();
}

void lcd_clear(void) {
  s_send_cmd(LCD_CMD_CLEARDISPLAY);
  s_delay_us(2000);
}

void lcd_home(void) {
  s_send_cmd(LCD_CMD_RETURNHOME);
  s_delay_us(2000);
}

void lcd_set_cursor(uint8_t column, uint8_t row) {
  static const uint8_t row_offsets[4] = {0x00, 0x40, 0x14, 0x54};
  if (row >= s_rows) {
    row = (s_rows == 0) ? 0 : (s_rows - 1);
  }
  s_send_cmd((uint8_t)(LCD_CMD_SETDDRAMADDR | (row_offsets[row] + column)));
}

void lcd_no_display(void) {
  s_control &= (uint8_t)~LCD_DISPLAY_ON;
  s_send_cmd(LCD_CMD_DISPLAYCONTROL | s_control);
}

void lcd_display(void) {
  s_control |= LCD_DISPLAY_ON;
  s_send_cmd(LCD_CMD_DISPLAYCONTROL | s_control);
}

void lcd_no_cursor(void) {
  s_control &= (uint8_t)~LCD_CURSOR_ON;
  s_send_cmd(LCD_CMD_DISPLAYCONTROL | s_control);
}

void lcd_cursor(void) {
  s_control |= LCD_CURSOR_ON;
  s_send_cmd(LCD_CMD_DISPLAYCONTROL | s_control);
}

void lcd_no_blink(void) {
  s_control &= (uint8_t)~LCD_BLINK_ON;
  s_send_cmd(LCD_CMD_DISPLAYCONTROL | s_control);
}

void lcd_blink(void) {
  s_control |= LCD_BLINK_ON;
  s_send_cmd(LCD_CMD_DISPLAYCONTROL | s_control);
}

void lcd_scroll_display_left(void) {
  s_send_cmd(LCD_CMD_CURSORSHIFT | LCD_DISPLAY_MOVE | LCD_MOVE_LEFT);
}

void lcd_scroll_display_right(void) {
  s_send_cmd(LCD_CMD_CURSORSHIFT | LCD_DISPLAY_MOVE | LCD_MOVE_RIGHT);
}

void lcd_left_to_right(void) {
  s_mode |= LCD_ENTRY_LEFT;
  s_send_cmd(LCD_CMD_ENTRYMODESET | s_mode);
}

void lcd_right_to_left(void) {
  s_mode &= (uint8_t)~LCD_ENTRY_LEFT;
  s_send_cmd(LCD_CMD_ENTRYMODESET | s_mode);
}

void lcd_auto_scroll(void) {
  s_mode |= LCD_ENTRY_SHIFT_INCREMENT;
  s_send_cmd(LCD_CMD_ENTRYMODESET | s_mode);
}

void lcd_no_auto_scroll(void) {
  s_mode &= (uint8_t)~LCD_ENTRY_SHIFT_INCREMENT;
  s_send_cmd(LCD_CMD_ENTRYMODESET | s_mode);
}

void lcd_set_backlight(uint8_t new_val) {
  if (new_val) {
    lcd_backlight();
  } else {
    lcd_no_backlight();
  }
}

void lcd_no_backlight(void) {
  s_backlight = LCD_BACKLIGHT_OFF;
  s_expander_write(0x00);
}

void lcd_backlight(void) {
  s_backlight = LCD_BACKLIGHT_ON;
  s_expander_write(0x00);
}

void lcd_create_special_char(uint8_t location, uint8_t charmap[]) {
  location &= 0x07; /* only 0–7 valid */
  s_send_cmd((uint8_t)(LCD_CMD_SETCGRAMADDR | (location << 3)));
  for (uint8_t i = 0; i < 8; ++i) {
    s_send_data(charmap[i]);
  }
}

void lcd_print_special_char(uint8_t index) { s_send_data(index & 0x07); }

void LCD_LoadCustomCharacter(uint8_t char_num, uint8_t *rows) {
  lcd_create_special_char(char_num, rows);
}

void lcd_print_str(const char c[]) {
  if (c == NULL) return;
  while (*c) {
    s_send_data((uint8_t)(*c++));
  }
}

/* Local helpers */
static void s_send_cmd(uint8_t cmd) { s_send(cmd, 0); }

static void s_send_data(uint8_t data) { s_send(data, LCD_PIN_RS); }

static void s_send(uint8_t value, uint8_t rs_mask) {
  uint8_t hi = (uint8_t)(value & 0xF0);
  uint8_t lo = (uint8_t)((value << 4) & 0xF0);
  s_write4((uint8_t)(hi | rs_mask));
  s_write4((uint8_t)(lo | rs_mask));
}

static void s_write4(uint8_t nibble) {
  s_expander_write(nibble);
  s_pulse_enable(nibble);
}

static void s_expander_write(uint8_t data) {
  uint8_t out = (uint8_t)(data | s_backlight);
  /* Note: using hi2c1 (8-bit addr) */
  (void)HAL_I2C_Master_Transmit(&hi2c1, LCD_DEVICE_ADDR, &out, 1, 10);
}

static void s_pulse_enable(uint8_t latched) {
  s_expander_write((uint8_t)(latched | LCD_PIN_ENABLE));
  s_delay_us(20);
  s_expander_write((uint8_t)(latched & (uint8_t)~LCD_PIN_ENABLE));
  s_delay_us(20);
}

static void s_delay_init(void) {
  CoreDebug->DEMCR &= ~CoreDebug_DEMCR_TRCENA_Msk;
  CoreDebug->DEMCR |= CoreDebug_DEMCR_TRCENA_Msk;

  DWT->CTRL &= ~DWT_CTRL_CYCCNTENA_Msk;
  DWT->CTRL |= DWT_CTRL_CYCCNTENA_Msk;
  DWT->CYCCNT = 0;

  __ASM volatile("NOP");
  __ASM volatile("NOP");
  __ASM volatile("NOP");
}

static void s_delay_us(uint32_t us) {
  const uint32_t cycles = (SystemCoreClock / 1000000) * us;
  const uint32_t start = DWT->CYCCNT;
  while ((DWT->CYCCNT - start) < cycles) {
    __ASM volatile("NOP");
  }
}
