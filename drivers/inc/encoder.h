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
#include "stdbool.h"

#define DEBOUNCE_DELAY_MS 20

typedef struct {
  int position;
  bool button_toggle;
} EncoderState;

void encoder_init();
void encoder_run();
EncoderState get_encoder_state();