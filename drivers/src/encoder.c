/************************************************************************************************
 * @file    encoder.c
 *
 * @brief   Source file for encoder driver
 *
 * @date    2025-11-20
 * @author  Midnight Sun Team #24 - MSXVI
 ************************************************************************************************/

/* Standard library Headers */
#include <stdint.h>
#include <string.h>

/* Inter-component Headers */
#include "encoder.h"

static volatile EncoderState encoder_state = {0, 0};

static const int8_t quadrature_table[16] = {
    0, -1, 1, 0,
    1, 0, 0, -1,
   -1, 0, 0, 1,
    0, 1, -1, 0,
};

void encoder_init() {
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  GPIO_InitTypeDef GPIO_InitStruct;

  GPIO_InitStruct.Pin = GPIO_PIN_15;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_HIGH;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  GPIO_InitStruct.Pin = GPIO_PIN_3;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  GPIO_InitStruct.Speed = GPIO_SPEED_HIGH;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  GPIO_InitStruct.Pin = GPIO_PIN_10;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_FALLING;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  GPIO_InitStruct.Speed = GPIO_SPEED_HIGH;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  HAL_NVIC_SetPriority(EXTI15_10_IRQn, 2, 0);
  HAL_NVIC_EnableIRQ(EXTI15_10_IRQn);
}

void encoder_run() {
  static uint8_t last_state = 0;

  uint8_t A = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_3);
  uint8_t B = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_15);

  uint8_t current_state = (A << 1) | B;
  uint8_t index = (last_state << 2) | current_state;

  int8_t delta = quadrature_table[index];
  encoder_state.position += delta;

  last_state = current_state;
}

void EXTI15_10_IRQHandler(void) {
    __HAL_GPIO_EXTI_CLEAR_IT(GPIO_PIN_10);
     static uint32_t last_interrupt_time = 0;
  uint32_t current_time = HAL_GetTick();
  if ((current_time - last_interrupt_time) > DEBOUNCE_DELAY_MS) {
    encoder_state.button_toggle = !encoder_state.button_toggle;
    last_interrupt_time = current_time;
  }
}

EncoderState get_encoder_state() {
  return encoder_state;
}