#pragma once

/************************************************************************************************
 * @file    led_status.c
 *
 * @brief   Header file for LED Status driver
 *
 * @date    2025-10-1
 * @author  Midnight Sun Team #24 - MSXVI
 ************************************************************************************************/

typedef enum {
  LED_STATE_CHARGING,
  LED_STATE_FAULT,
  IDLE,
  NUM_LED_STATES
} LedState;

HAL_StatusTypeDef led_init(void);
HAL_StatusTypeDef led_run(Application* state);
void set_state(Application* state, enum LedState* led_state);
