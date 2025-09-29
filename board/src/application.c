#include "application.h"

#include "stm32f3xx_hal.h"

void application_init(Application *application) { HAL_Init(); }

void application_run(Application *application) { HAL_Delay(1000); }
