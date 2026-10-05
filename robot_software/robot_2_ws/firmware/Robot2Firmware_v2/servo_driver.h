#ifndef SERVO_DRIVER_H
#define SERVO_DRIVER_H

#include <Arduino.h>
#include "config.h"

void servoBegin();
void servoSetAngle(int angle);
void servoOpen();    // fully open
void servoClose();   // fully closed
int  servoGetAngle();

#endif