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
#include <string>

<<<<<<< HEAD
extern "C" void vServoTask(void *pvParameters)
{
    Camera_Init();

    Yaw_Set_Direction();
    
	vTaskDelay(500);
=======

extern "C" void vSayHelloTask(void *pvParameters) {
    ParamsStruct* params = (ParamsStruct*) pvParameters;

    while(1) {
        printf("Hello, %s! \n", params->name);
	    vTaskDelay(500);
    }
}

extern "C" void vModeTask(void *pvParameters) {
    ParamsStruct* params = (ParamsStruct*) pvParameters;

    while(1) {
        printf("Current Mode, %s! \n", params->mode);
	    vTaskDelay(500);
    }
}

extern "C" void vYawValueTask(void *pvParameters) {
    ParamsStruct* params = (ParamsStruct*) pvParameters;

    while(1) {
        printf("Current Yaw Value, %s! \n", params->yaw_value);
	    vTaskDelay(500);
    }
}

/*
    This task demonstrates how to read and write from EEPROM,
    which is non-voltaile memory that we can use to store data on the 
    ESP.
*/
extern "C" void vCountTask(void *pvParameters)
{
    int count = 0;
    EEPROM.put(BEGINING_ADDR, count);
    EEPROM.commit();

    while(1) {
        count = EEPROMCount(BEGINING_ADDR);
        printf("I have said hello %d times!\n\n\n", count);
        vTaskDelay(500);
    }
>>>>>>> 5d340852f35a063e5b69c5386cf1335127fa695e
}
