#pragma once

/************************************************************************************************
 * @file    led_status.c
 *
 * @brief   Header file for LED Status driver
 *
 * @date    2025-10-1
 * @author  Midnight Sun Team #24 - MSXVI
 ************************************************************************************************/
 
#include <stdbool.h>

enum Charging {
  IS_CHARGING,
  NOT_CHARGING,
};

enum Fault {
  HAS_FAULT,
  NO_FAULT,
};

typedef struct {
  enum Charging is_charging;
  enum Fault is_fault;
} Application;

typedef struct {
    bool flashing_toggle;
} LED_Flashing_Flag;

HAL_StatusTypeDef led_init(void);
HAL_StatusTypeDef led_run(Application* flag);
void set_flashing_toggle(bool state);
bool get_flashing_toggle(void);
void set_fault(enum Fault state);
void clear_fault(void);