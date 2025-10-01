#pragma once

#include <stdbool.h>

typedef struct {
    bool is_charging;
    bool is_fault;
} Application;

void application_init(Application *application);

void application_run(Application *application);
