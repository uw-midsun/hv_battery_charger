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

// PORT_B.
#define SW_PIN_BTN GPIO_PIN_5
#define DIGSET_PIN_BTN GPIO_PIN_6
#define SET_ACTUAL_PIN_BTN GPIO_PIN_7

#define DEBOUNCE_DELAY_MS 20

// typedef enum {
//   SWITCH_VOLTAGE,
//   SWITCH_CURRENT,
//   NUM_SWITCH_STATES
// } SwitchState;

// typedef enum {
//   DIGSET_TEN,
//   DIGSET_ONE,
//   DIGSET_TENTH,
//   NUM_ENCODER_DIGSET_STATES
// } DigSetState;

// typedef enum {
//   DISPLAY_SET,
//   DISPLAY_VALUE,
//   NUM_DISPLAY_STATES
// } SetActualState;

// typedef struct {
//   SwitchState switch_state;
//   DigSetState dig_set_state;
//   SetActualState set_actual_state;
// } ButtonManagerState;

typedef struct {
  GPIO_TypeDef *port;
  uint32_t pin;
} GenericButton;

// ButtonManagerState button_manager_get_state();