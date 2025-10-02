#pragma once

/************************************************************************************************
 * @file    led_status.c
 *
 * @brief   Header file for LED Status driver
 *
 * @date    2025-10-1
 * @author  Midnight Sun Team #24 - MSXVI
 ************************************************************************************************/

#include "stm32f3xx.h"

// PORT_B.
#define FAULT_LED_PIN GPIO_PIN_0
#define CHARGING_LED_PIN GPIO_PIN_1

typedef enum {
  LED_STATE_CHARGING,
  LED_STATE_FAULT,
  LED_STATE_IDLE,
  NUM_LED_STATES
} LedState;

void led_init();
void led_run();
void led_set_state(LedState led_state);
void led_clear_fault();
