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

void generic_button_init(GenericButton* button) {
  __HAL_RCC_SYSCFG_CLK_ENABLE();
  switch (button->port) {
    case GPIOA:
      __HAL_RCC_GPIOA_CLK_ENABLE();
      break;
    case GPIOB:
      __HAL_RCC_GPIOB_CLK_ENABLE();
      break;
    case GPIOC:
      __HAL_RCC_GPIOC_CLK_ENABLE();
      break;
    case GPIOD:
      __HAL_RCC_GPIOD_CLK_ENABLE();
      break;
    case GPIOF:
      __HAL_RCC_GPIOF_CLK_ENABLE();
      break;
    default:
      break;
  }
  GPIO_InitTypeDef GPIO_InitStruct;
  GPIO_InitStruct.Pin = button->pin;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_FALLING;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  GPIO_InitStruct.Speed = GPIO_SPEED_HIGH;
  HAL_GPIO_Init(button->port, &GPIO_InitStruct);
}