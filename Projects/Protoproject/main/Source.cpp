#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "Source.h"
#include "Arduino.h"
#include "EEPROM.h"
#include "constants.h"

////////////////////////////////////////////////////////////////////////////////
//                               BEGIN CODE HERE                              //
////////////////////////////////////////////////////////////////////////////////

bool initEEPROM ()
{
    bool status = EEPROM.begin(EEPROM_SIZE);
    switch(status)
    {
        case 0:
	    printf("ERROR: EEPROM initialization failure.\n");
	    usleep(1000);
	    break;
	case 1:
	    printf("Successfully initialized EEPROM, size = %d.\n", EEPROM_SIZE);
	    usleep(1000);
	    break;
	default:
	    break;
    }
    return status;    
}

int EEPROMCount(int addr)
{
    int data = EEPROM.read(addr);
    data++;
    EEPROM.write(addr, data);
    EEPROM.commit();
    return data;
}

void Camera_Init()
{
    Servo yaw_servo(5, 0, 0, 50, 3.75, 11.25);
    printf("Camera Has Been Initialized.\n");

}

void Yaw_Set_Direction() {
    yaw_servo.SetPositionPercent(50);
}

////////////////////////////////////////////////////////////////////////////////
//                               CODE ENDS HERE                               //
////////////////////////////////////////////////////////////////////////////////
