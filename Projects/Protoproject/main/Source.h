#include <AsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include <stdlib.h>
#include <stdio.h>
#include "Servo_Control.hpp"

#ifndef PROTOPROJECT_H_
#define PROTOPROJECT_H_

#ifdef _cplusplus
extern "C" {
#endif

struct ParamsStruct {
    char name[40]; // test parameter
    char mode[2]; // arm or manual control mode
    double yaw_value; // y axis value of the gimbal
    
};

void initServer(AsyncWebServer* server, ParamsStruct* params);

bool initEEPROM();

int EEPROMCount(int addr);

<<<<<<< HEAD
void Camera_Init();

void Yaw_Set_Direction();
=======
void hello_world(char* name);
>>>>>>> 5d340852f35a063e5b69c5386cf1335127fa695e

#ifdef _cplusplus
}
#endif

#endif

