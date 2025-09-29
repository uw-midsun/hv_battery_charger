#include "application.h"

static Application application;

void main() {
  application_init(&application);
  while (1) {
    application_run(&application);
  }
}

#ifdef USE_FULL_ASSERT
void assert_failed(uint8_t* file, uint32_t line) {}
#endif
