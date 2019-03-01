#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string>
#include <iostream>
#include "esp_system.h"
#include "esp_spi_flash.h"
#include "Arduino.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "RTOStasks.h"
#include "Source.h"
#include "constants.h"

ParamsStruct params;
//Server used to listen for XHRs, and send SSEs.
AsyncWebServer server(80);

extern "C" void app_main() {
    
    Serial.begin(115200);
    initArduino();
    initServer(&server, &params);

    //Init EEPROM (how we write data)
    if (!initEEPROM()) {
        for (int i = 10; i >= 0; i--) {
            printf("Restarting in %d seconds...\n", i);
            usleep(1000);
        }
        printf("Restarting now.\n");
        fflush(stdout);
        esp_restart();
    }

<<<<<<< HEAD
    xTaskCreate(vServoTask, "Servo", 4096, NULL, 1, NULL);

=======
    //Create freeRTOS tasks.
    xTaskCreate(vSayHelloTask, "Hello", 4096, &params, 1, NULL);
    xTaskCreate(vModeTask, "Mode", 4096, &params, 1, NULL);
    xTaskCreate(vYawValueTask, "Yaw Value", 4096, &params, 1, NULL);
    xTaskCreate(vCountTask, "Count", 4096, NULL, 1, NULL);
>>>>>>> 5d340852f35a063e5b69c5386cf1335127fa695e
}

