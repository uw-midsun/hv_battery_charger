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

    GPIO_InitTypeDef GPIO_InitStruct = {0};
    GPIO_InitStruct.Pin = GPIO_PIN_8;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    GPIO_InitStruct.Alternate = GPIO_AF6_TIM1;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    // configure base timer parameters
    htim1.Instance = TIM1;
    htim1.Init.Prescaler = 71;
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
    HAL_TIM_PWM_ConfigChannel(&htim1, &sConfigOC, BUZZER_TIM_CHANNEL);
 }

void buzzer_stop(void) {
    HAL_TIM_PWM_Stop(&htim1, BUZZER_TIM_CHANNEL);
}

 void buzzer_freq(uint32_t freq) {
    if (freq == 0) {
        buzzer_stop();
        return;
    }

    HAL_TIM_PWM_Stop(&htim1, BUZZER_TIM_CHANNEL);
    uint32_t period = (BUZZER_TIMER_CLOCK_HZ / freq) - 1;

    if (period > 0xFFFF) {
        period = 0xFFFF;
    }
    
    __HAL_TIM_SET_AUTORELOAD(&htim1, period);
    __HAL_TIM_SET_COMPARE(&htim1, BUZZER_TIM_CHANNEL, period / 2);
    HAL_TIM_PWM_Start(&htim1, BUZZER_TIM_CHANNEL);
 }