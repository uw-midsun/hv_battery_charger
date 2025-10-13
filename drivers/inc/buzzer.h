#pragma once

/************************************************************************************************
 * @file    buzzer.h
 *
 * @brief   Header file for the Soberton PT-1203-3 buzzer driver.
 *
 * @date    2025-10-12
 * @author  Midnight Sun Team #24 - MSXVI
 ************************************************************************************************/

 // include main HAL header to bring in required types
 #include "stm32f3xx_hal.h"
 #include "stm32f3xx_hal_tim.h"
 #include "stm32f3xx_hal_rcc.h"
 #include "stm32f3xx_hal_gpio.h"
 #include "stdint.h"

 void buzzer_init(void);

 // sets the buzzer's output to generate a tone
 // freq is the desired frequency in Hz, a frequency of 0 will stop the PWM output and silence the buzzer
 void buzzer_freq(uint32_t freq);