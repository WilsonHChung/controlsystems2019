#include <stdlib.h>
#include "freertos/FreeRTOS.h"
#include "freertos/portmacro.h"
#include "freertos/event_groups.h"

#ifndef RTOS_TASKS_H_
#define RTOS_TASKS_H_

#ifdef _cplusplus
extern "C" {
#endif

<<<<<<< HEAD
extern "C" void vServoTask(void *pvParameters);
=======
extern "C" void vSayHelloTask(void *pvParameters);

extern "C" void vModeTask(void *pvParameters);

extern "C" void vYawValueTask(void *pvParameters);

extern "C" void vCountTask(void *pvPArameters);
>>>>>>> 5d340852f35a063e5b69c5386cf1335127fa695e

#ifdef _cplusplus
}
#endif
#endif
