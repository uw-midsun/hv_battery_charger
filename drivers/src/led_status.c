/************************************************************************************************
 * @file    led_status.c
 *
 * @brief   Temp
 *
 * @date    2025-10-1
 * @author  Midnight Sun Team #24 - MSXVI
 ************************************************************************************************/

/* Standard library Headers */
#include <stdint.h>
#include <string.h>

/* Inter-component Headers */
#include "led_status.h"

#include "stm32f3xx_hal_gpio.h"
#include "stm32f334x8.h"
#include "application.h"

void SystemClock_Config(void);
static void MX_GPIO_Init(void);

void led_init() {
  GPIO_InitTypeDef GPIO_InitStruct;
  
  // Init PB0 LED RED
  GPIO_InitStruct.Pin = GPIO_PIN_0;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_HIGH;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  // Init PB1 LED WHITE
  GPIO_InitStruct.Pin = GPIO_PIN_1;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_HIGH;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
}

bool flashing_toggle = 0;

void led_run(Application* flag) {
  if (flag->is_charging) {
    if (flashing_toggle) {
      HAL_GPIO_SetPin(GPIOB, GPIO_PIN_1, GPIO_PIN_SET);
    }
    flashing_toggle = !flashing_toggle;
  } else {
    HAL_GPIO_SetPin(GPIOB, GPIO_PIN_1, GPIO_PIN_RESET);
  }
  if (flag->is_fault) {
    HAL_GPIO_SetPin(GPIOB, GPIO_PIN_0, GPIO_PIN_SET);
  } else {
    HAL_GPIO_SetPin(GPIOB, GPIO_PIN_0, GPIO_PIN_RESET);
  }
}