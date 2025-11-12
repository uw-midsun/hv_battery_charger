#pragma once

/************************************************************************************************
 * @file    button_manager.h
 *
 * @brief   Header file for Button Manager
 *
 * @date    2025-10-29
 * @author  Midnight Sun Team #24 - MSXVI
 ************************************************************************************************/

#include "stm32f3xx.h"

#define SW_PIN_BTN GPIO_PIN_5
#define DIGSET_PIN_BTN GPIO_PIN_6
#define SET_ACTUAL_PIN_BTN GPIO_PIN_7

#define DEBOUNCE_DELAY_MS 20

typedef struct {
  GPIO_TypeDef* port;
  uint32_t pin;
} GenericButton;