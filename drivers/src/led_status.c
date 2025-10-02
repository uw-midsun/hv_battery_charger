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

static LedState state;

void led_init() {
  __HAL_RCC_GPIOB_CLK_ENABLE();
  GPIO_InitTypeDef GPIO_InitStruct;

  // Init PB0 LED RED
  GPIO_InitStruct.Pin = FAULT_LED_PIN;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_HIGH;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  // Init PB1 LED WHITE
  GPIO_InitStruct.Pin = CHARGING_LED_PIN;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_HIGH;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  state = LED_STATE_IDLE;
}

void led_run() {
  if (state == LED_STATE_CHARGING) {
    HAL_GPIO_TogglePin(GPIOB, CHARGING_LED_PIN);
  }
}

void led_set_state(LedState led_state) {
  if (state == LED_STATE_FAULT) {
    return;
  }
  switch (led_state) {
    case LED_STATE_FAULT:
      HAL_GPIO_WritePin(GPIOB, FAULT_LED_PIN, GPIO_PIN_SET);
      HAL_GPIO_WritePin(GPIOB, CHARGING_LED_PIN, GPIO_PIN_RESET);
      break;
    case LED_STATE_CHARGING:
      HAL_GPIO_WritePin(GPIOB, FAULT_LED_PIN, GPIO_PIN_RESET);
      HAL_GPIO_WritePin(GPIOB, CHARGING_LED_PIN, GPIO_PIN_SET);
      break;
    case LED_STATE_IDLE:
      HAL_GPIO_WritePin(GPIOB, FAULT_LED_PIN, GPIO_PIN_RESET);
      HAL_GPIO_WritePin(GPIOB, CHARGING_LED_PIN, GPIO_PIN_RESET);
      break;
    default:
      break;
  }
  state = led_state;
}

void led_clear_fault() {
  if (state == LED_STATE_FAULT) {
    state = NUM_LED_STATES;
    led_set_state(LED_STATE_IDLE);
  }
}
