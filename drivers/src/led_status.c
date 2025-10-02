/************************************************************************************************
 * @file    led_status.c
 *
 * @brief   Source file for LED Status driver
 *
 * @date    2025-10-1
 * @author  Midnight Sun Team #24 - MSXVI
 ************************************************************************************************/

/* Standard library Headers */
#include <stdint.h>
#include <string.h>

/* Inter-component Headers */
#include "led_status.h"
#include "stm32f334x8.h"
#include "stm32f3xx_hal_gpio.h"

HAL_StatusTypeDef led_init() {
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

  return HAL_OK;
}

static LED_Flashing_Flag led_flags = {0};

HAL_StatusTypeDef led_run(Application* state) {
  switch (state->is_fault) {
    case HAS_FAULT:
      HAL_GPIO_SetPin(GPIOB, GPIO_PIN_0, GPIO_PIN_SET);
      return HAL_OK;
    case NO_FAULT:
      HAL_GPIO_SetPin(GPIOB, GPIO_PIN_0, GPIO_PIN_RESET);
      break;
    default:
      break;
  }

  switch (state->is_charging) {
    case IS_CHARGING:
      if (get_flashing_toggle()) {
        HAL_GPIO_SetPin(GPIOB, GPIO_PIN_1, GPIO_PIN_SET);
      }
      set_flashing_toggle(!get_flashing_toggle());
      break;
    case NOT_CHARGING:
      HAL_GPIO_SetPin(GPIOB, GPIO_PIN_1, GPIO_PIN_RESET);
      break;
    default:
      break;
  }
  return HAL_OK;
}

void set_flashing_toggle(bool state) { led_flags.flashing_toggle = state; }

bool get_flashing_toggle(void) { return led_flags.flashing_toggle; }

void set_fault(Application* state, enum Fault* is_fault) {
  if (state->is_fault == HAS_FAULT) {
    return;
  }
  state->is_fault = is_fault;
}

static void clear_fault(Application* state) {
  if (state->is_fault == HAS_FAULT) {
    state->is_fault = NO_FAULT;
  }
}