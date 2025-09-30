#pragma once

/************************************************************************************************
 * @file    lcd.h
 *
 * @brief   Header file for API for the LCD Display that uses an I2C expander
 *          Based on:
 *https://github.com/eziya/STM32_HAL_I2C_HD44780/blob/master/Src/liquidcrystal_i2c.h
 *
 * @date    2025-09-28
 * @author  Midnight Sun Team #24 - MSXVI
 ************************************************************************************************/

/* Standard library headers */
#include <stdbool.h>
#include <stdint.h>

/* Inter-component Headers */
#include "stm32f3xx_hal.h"
#include "stm32f3xx_hal_i2c.h"

/* Intra-component Headers */

/**
 * @defgroup LCD_I2C
 * @brief    LCD over I2C
 * @{
 */

/**
 * @brief   7-bit I2C address for the expander
 * @warning If display just shows white block of text change this value
 */
#ifndef LCD_I2C_ADDR_7BIT
#define LCD_I2C_ADDR_7BIT (0x27)
#endif

/**
 * @brief 8-bit address for the expander
 */
#ifndef LCD_DEVICE_ADDR
#define LCD_DEVICE_ADDR ((uint8_t)(LCD_I2C_ADDR_7BIT << 1))
#endif

#define LCD_CMD_CLEARDISPLAY 0x01 /**< Command to clear display */
#define LCD_CMD_RETURNHOME 0x02   /**< Command to return cursor to home */
#define LCD_CMD_ENTRYMODESET \
  0x04 /**< Command to set entry mode (text direction, shifting) */
#define LCD_CMD_DISPLAYCONTROL \
  0x08 /**< Command to control display on/off, cursor, blink */
#define LCD_CMD_CURSORSHIFT \
  0x10 /**< Command to shift cursor or entire display */
#define LCD_CMD_FUNCTIONSET \
  0x20 /**< Command to set function (data length, lines, font) */
#define LCD_CMD_SETCGRAMADDR \
  0x40 /**< Command to set CGRAM address (for custom characters) */
#define LCD_CMD_SETDDRAMADDR \
  0x80 /**< Command to set DDRAM address (cursor position) */

/* Entry mode flags (for LCD_CMD_ENTRYMODESET) */
#define LCD_ENTRY_RIGHT \
  0x00 /**< Entry mode: increment DDRAM addr right-to-left */
#define LCD_ENTRY_LEFT \
  0x02 /**< Entry mode: increment DDRAM addr left-to-right */
#define LCD_ENTRY_SHIFT_INCREMENT \
  0x01 /**< Entry mode: shift display when writing new data */
#define LCD_ENTRY_SHIFT_DECREMENT \
  0x00 /**< Entry mode: do not shift display on write */

/* Display control flags (for LCD_CMD_DISPLAYCONTROL) */
#define LCD_DISPLAY_ON 0x04  /**< Turn display ON */
#define LCD_DISPLAY_OFF 0x00 /**< Turn display OFF */
#define LCD_CURSOR_ON 0x02   /**< Enable underline cursor */
#define LCD_CURSOR_OFF 0x00  /**< Disable underline cursor */
#define LCD_BLINK_ON 0x01    /**< Enable blinking cursor */
#define LCD_BLINK_OFF 0x00   /**< Disable blinking cursor */

/* Cursor/display shift flags (for LCD_CMD_CURSORSHIFT) */
#define LCD_DISPLAY_MOVE 0x08 /**< Shift the entire display */
#define LCD_CURSOR_MOVE 0x00  /**< Move the cursor only */
#define LCD_MOVE_RIGHT 0x04   /**< Shift/move to the right */
#define LCD_MOVE_LEFT 0x00    /**< Shift/move to the left */

/* Function set flags (for LCD_CMD_FUNCTIONSET) */
#define LCD_8BITMODE 0x10 /**< Use 8-bit data interface */
#define LCD_4BITMODE 0x00 /**< Use 4-bit data interface */
#define LCD_2LINE 0x08    /**< Use two display lines */
#define LCD_1LINE 0x00    /**< Use single display line */
#define LCD_5x10DOTS 0x04 /**< Use 5x10 dot character font */
#define LCD_5x8DOTS 0x00  /**< Use 5x8 dot character font */

/** Backlight control bit (depends on wiring) */
#define LCD_BACKLIGHT_ON 0x08  /**< Turn backlight ON */
#define LCD_BACKLIGHT_OFF 0x00 /**< Turn backlight OFF */

/** Control line masks on the expander (wiring-dependent) */
#define LCD_PIN_ENABLE 0x04 /**< Expander bit for Enable (E) pin */
#define LCD_PIN_RW                                                           \
  0x00 /**< Expander bit for Read/Write (RW) pin (unused in write-only mode) \
        */
#define LCD_PIN_RS 0x01 /**< Expander bit for Register Select (RS) pin */

/**
 * @brief  Initialize the LCD in 4-bit mode
 * @param  rows Number of display rows (1, 2, or 4 typical)
 * @note   Must be called before any other LCD_ function
 */
void lcd_init(uint8_t rows);

/**
 * @brief  Clear the display and return cursor to (0,0)
 * @note   Blocks ~2 ms
 */
void lcd_clear(void);

/**
 * @brief  Return cursor to home (0,0) without clearing DDRAM
 * @note   Blocks ~2 ms
 */
void lcd_home(void);

/**
 * @brief  Set cursor position
 * @param  column Index of column
 * @param  row Index of row
 */
void lcd_set_cursor(uint8_t column, uint8_t row);

/** @brief Turn the display off (contents preserved) */
void lcd_no_display(void);

/** @brief Turn the display on */
void lcd_display(void);

/** @brief Hide the underline cursor */
void lcd_no_cursor(void);

/** @brief Show the underline cursor */
void lcd_cursor(void);

/** @brief Disable cursor blink */
void lcd_no_blink(void);

/** @brief Enable cursor blink */
void lcd_blink(void);

/** @brief Scroll whole display one position left */
void lcd_scroll_display_left(void);

/** @brief Scroll whole display one position right */
void lcd_scroll_display_right(void);

/** @brief Set text direction left-to-right (LTR) */
void lcd_left_to_right(void);

/** @brief Set text direction right-to-left (RTL) */
void lcd_right_to_left(void);

/** @brief Enable automatic shift on writes */
void lcd_auto_scroll(void);

/** @brief Disable automatic shift on writes */
void lcd_no_auto_scroll(void);

/**
 * @brief  Set backlight state
 * @param  new_val Non-zero enables backlight, zero disables
 */
void lcd_set_backlight(uint8_t new_val);

/** @brief Disable the LCD backlight */
void lcd_no_backlight(void);

/** @brief Enable the LCD backlight */
void lcd_backlight(void);

/**
 * @brief  Create/overwrite a CGRAM character
 * @param  location CGRAM slot (0–7)
 * @param  charmap  Pointer to 8 bytes; each byte uses bits 0..4 for a 5-pixel
 * row
 * @note   After calling, print it with lcd_print_special_char(location)
 */
void lcd_create_special_char(uint8_t location, uint8_t charmap[]);

/**
 * @brief  Print a previously defined CGRAM character (0–7)
 * @param  index CGRAM slot index
 */
void lcd_print_special_char(uint8_t index);

/**
 * @brief  Convenience alias to program a CGRAM character
 * @param  char_num CGRAM slot (0–7)
 * @param  rows     Pointer to 8 bytes describing the glyph rows
 */
void lcd_load_custom_char(uint8_t char_num, uint8_t *rows);

/**
 * @brief  Print a C string at the current cursor position
 * @param  c Null-terminated string
 */
void lcd_print_str(const char c[]);
