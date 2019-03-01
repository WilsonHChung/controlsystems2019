#include <stdlib.h>
#include <stdio.h>
#include "Servo_Control.hpp"

#ifndef PROTOPROJECT_H_
#define PROTOPROJECT_H_

#ifdef _cplusplus
extern "C" {
#endif

bool initEEPROM();

int EEPROMCount(int addr);

void Camera_Init();

void Yaw_Set_Direction();

#ifdef _cplusplus
}
#endif

#endif

