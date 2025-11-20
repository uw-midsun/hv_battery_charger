#pragma once

/************************************************************************************************
 * @file    encoder.h
 *
 * @brief   Header file for encoder driver
 *
 * @date    2025-11-20
 * @author  Midnight Sun Team #24 - MSXVI
 ************************************************************************************************/

#include "stm32f3xx.h"

#define DEBOUNCE_DELAY_MS 20

typedef enum {
  BUTTON_ON,
  BUTTON_OFF,
  NUM_BUTTON_STATES
} ButtonState;

typedef struct {
  int position;
  ButtonState button_toggle;
} EncoderState;

void encoder_init();
void encoder_run();
EncoderState get_encoder_state();