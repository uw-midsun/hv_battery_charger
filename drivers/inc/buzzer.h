#pragma once

/************************************************************************************************
 * @file    buzzer.h
 *
 * @brief   Public API for the Soberton PT-1203-3 Piezo Buzzer driver.
 *
 * @date    2025-10-12
 * @author  Midnight Sun Team #24 - MSXVI
 ************************************************************************************************/

// Include the main HAL header to bring in required types.
#include "stm32f3xx_hal.h"
#include "stm32f3xx_hal_tim.h"
#include "stm32f3xx_hal_rcc.h"
#include "stm32f3xx_hal_gpio.h"
#include "stdint.h"

// --- Driver Configuration ---

/**
 * @brief The effective clock frequency of the timer after the prescaler is applied.
 * @details This is calculated from the System Clock (72MHz) and the Prescaler (71)
 *          set in buzzer_init(). Formula: 72000000 / (71 + 1) = 1000000Hz = 1MHz
 */
#define BUZZER_TIMER_CLOCK_HZ 1000000UL

/**
 * @brief The specific hardware timer channel connected to the buzzer's GPIO pin.
 * @details
 */
#define BUZZER_TIM_CHANNEL TIM_CHANNEL_1

// --- Public Function Prototypes ---

/**
 * @brief   Initializes the hardware resources required for the buzzer.
 * @details Configures a general-purpose timer (TIM1) and a GPIO pin (PA8) to
 *          generate a PWM signal. This must be called once at startup.
 * @param   None
 * @retval  None
 */
void buzzer_init(void);

/**
 * @brief   Stops the buzzer PWM output.
 * @param   None
 * @retval  None
 */
void buzzer_stop(void);

/**
 * @brief   Sets the buzzer's output frequency to generate a tone.
 * @param   freq The desired frequency in Hz.
 *               A frequency of 0 will stop the PWM output and silence the buzzer.
 * @retval  None
 */
void buzzer_freq(uint32_t freq);