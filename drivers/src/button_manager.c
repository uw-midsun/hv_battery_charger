/************************************************************************************************
 * @file    button_manager.c
 *
 * @brief   Source file for Button Manager
 *
 * @date    2025-10-29
 * @author  Midnight Sun Team #24 - MSXVI
 ************************************************************************************************/

/* Standard library Headers */
#include <stdint.h>
#include <string.h>

/* Inter-component Headers */
#include "button_manager.h"

static ButtonManagerState button_manager_state;
uint32_t last_button_press_time = 0;

void button_init() {
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_SYSCFG_CLK_ENABLE();
  GPIO_InitTypeDef GPIO_InitStruct;

  GPIO_InitStruct.Pin = SW_PIN_BTN | DIGSET_PIN_BTN | SET_ACTUAL_PIN_BTN;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_FALLING;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  GPIO_InitStruct.Speed = GPIO_SPEED_HIGH;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  HAL_NVIC_SetPriority(EXTI9_5_IRQn, 2, 0);
  HAL_NVIC_EnableIRQ(EXTI9_5_IRQn);

  button_manager_state.switch_state = SWITCH_VOLTAGE;
  button_manager_state.dig_set_state = DIGSET_ONE;
  button_manager_state.set_actual_state = DISPLAY_SET;
}

void EXTI9_5_IRQHandler() {
  uint32_t current_time = HAL_GetTick();

  if ((current_time - last_button_press_time > DEBOUNCE_DELAY_MS)) {
    last_button_press_time = current_time;
  } else {
    return;
  }
  if (__HAL_GPIO_EXTI_GET_IT(SW_PIN_BTN) != RESET) {
    __HAL_GPIO_EXTI_CLEAR_IT(SW_PIN_BTN);
    ++button_manager_state.switch_state;
    if (button_manager_state.switch_state >= NUM_SWITCH_STATES) {
      button_manager_state.switch_state = 0;
    }
  }

  if (__HAL_GPIO_EXTI_GET_IT(DIGSET_PIN_BTN) != RESET) {
    __HAL_GPIO_EXTI_CLEAR_IT(DIGSET_PIN_BTN);
    ++button_manager_state.dig_set_state;
    if (button_manager_state.dig_set_state >= NUM_ENCODER_DIGSET_STATES) {
      button_manager_state.dig_set_state = 0;
    }
  }

  if (__HAL_GPIO_EXTI_GET_IT(SET_ACTUAL_PIN_BTN) != RESET) {
    __HAL_GPIO_EXTI_CLEAR_IT(SET_ACTUAL_PIN_BTN);
    ++button_manager_state.set_actual_state;
    if (button_manager_state.set_actual_state >= NUM_DISPLAY_STATES) {
      button_manager_state.set_actual_state = 0;
    }
  }
}

ButtonManagerState button_manager_get_state() { return button_manager_state; }