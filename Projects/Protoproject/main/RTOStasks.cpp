#include <stdlib.h>
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/portmacro.h"
#include "freertos/event_groups.h"
#include "esp_log.h"
#include "Arduino.h"
#include "EEPROM.h"
#include "Source.h"
#include "constants.h"

extern "C" void vServoTask(void *pvParameters)
{
    Camera_Init();

    Yaw_Set_Direction();
    
	vTaskDelay(500);
}
