/************************************************************************************************
 * @file    led_status.c
 *
 * @brief   Source file for LED Status driver
 *
 * @date    2025-10-1
 * @author  Midnight Sun Team #24 - MSXVI
 ************************************************************************************************/

/* Standard library Headers */
#include <stdbool.h>
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

typedef struct Application {
  LedState led_state;
  bool is_flashing;
} Application;

HAL_StatusTypeDef led_run(Application* state) {
  switch (state->led_state) {
    case LED_STATE_FAULT:
      return HAL_GPIO_SetPin(GPIOB, GPIO_PIN_0, GPIO_PIN_SET);
    case LED_STATE_CHARGING:
      state->is_flashing = !state->is_flashing;
      if (state->is_flashing) {
        return HAL_GPIO_SetPin(GPIOB, GPIO_PIN_1, GPIO_PIN_SET);
      }
      return HAL_GPIO_SetPin(GPIOB, GPIO_PIN_1, GPIO_PIN_RESET);
    case IDLE:
      HAL_GPIO_SetPin(GPIOB, GPIO_PIN_0, GPIO_PIN_RESET);
      return HAL_GPIO_SetPin(GPIOB, GPIO_PIN_1, GPIO_PIN_RESET);
    default:
      break;
  }
  return HAL_OK;
}

void set_state(Application* state, enum LedState* led_state) {
  if (state->led_state == LED_STATE_FAULT) {
    return;
  }
  state->led_state = led_state;
}

void clear_fault(Application* state) {
  if (state->led_state == LED_STATE_FAULT) {
    state->led_state = IDLE;
  }
}

void set_flashing(Application* state, bool is_flashing) { state->is_flashing = is_flashing; }

bool get_flashing(Application* state) { return state->is_flashing; }