/************************************************************************************************
 * @file    buzzer.c
 *
 * @brief   Source file for the Soberton PT-1203-3 buzzer driver.
 *
 * @date    2025-10-12
 * @author  Midnight Sun Team #24 - MSXVI
 ************************************************************************************************/
 #include "buzzer.h"

 static TIM_HandleTypeDef htim1;

 void buzzer_init(void) {
    // enable the clocks for the GPIO port and Timer peripheral
    __HAL_RCC_GPIOA_CLK_ENABLE();
    __HAL_RCC_TIM1_CLK_ENABLE();

    // configure GPIO Pin PA8 as a function output for timer
    GPIO_InitTypeDef GPIO_InitStruct = {0};
    GPIO_InitStruct.Pin = GPIO_PIN_8;
    // set mode to alternate function push-pull to connect the pin to the TIM1 peripheral output
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    // no pull-up or pull-down resistor is needed for push-pull output
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    // low speed is sufficient for audio frequencies
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    // specify the alternate function mapping for TIM1_CH1 on PA8 for the STM32
    GPIO_InitStruct.Alternate = GPIO_AF6_TIM1;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    // configure base timer parameters
    htim1.Instance = TIM1;
    htim1.Init.Prescaler = 71; // results in a 1MHZ clock for timer clocker
    htim1.Init.CounterMode = TIM_COUNTERMODE_UP;
    htim1.Init.Period = 0;
    htim1.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
    htim1.Init.RepetitionCounter = 0;
    htim1.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_ENABLE;
    HAL_TIM_PWM_Init(&htim1);

    // configure the specific PWM output channel
    TIM_OC_InitTypeDef sConfigOC = {0};
    sConfigOC.OCMode = TIM_OCMODE_PWM1;
    sConfigOC.Pulse = 0;
    sConfigOC.OCPolarity = TIM_OCPOLARITY_HIGH;
    sConfigOC.OCNPolarity = TIM_OCNPOLARITY_HIGH;
    sConfigOC.OCIdleState = TIM_OCIDLESTATE_RESET;
    sConfigOC.OCNIdleState = TIM_OCNIDLESTATE_RESET;
    HAL_TIM_PWM_ConfigChannel(&htim1, &sConfigOC, TIM_CHANNEL_1);
 }

 void buzzer_freq(uint32_t freq) {
    // a frequency of 0 is the method for silencing the buzzer
    if (freq == 0) {
        HAL_TIM_PWM_Stop(&htim1, TIM_CHANNEL_1);
        return;
    }
    
    uint32_t clock = 1000000; // 1MHz timer clock

    // calculate the auto-reload register value from the desired frequency
    // formula: auto-reload register = (F_timer_clock / F_pwm) - 1
    uint32_t period = (clock / freq) - 1;

    // the timer's period register is 16-bit, so we cap the value here at the max
    if (period > 0xFFFF) {
        period = 0xFFFF;
    }
    // update the timer's frequency using HAL macro here
    __HAL_TIM_SET_AUTORELOAD(&htim1, period);
    // set the pulse for a square wave, so we set the puluse for a 50% duty cycle
    __HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_1, period / 2);
    // start the pwm signal generation on channel 1
    HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_1);
 }