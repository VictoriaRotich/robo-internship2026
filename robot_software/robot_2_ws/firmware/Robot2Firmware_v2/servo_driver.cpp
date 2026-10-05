#include "servo_driver.h"
#include <Servo.h>

static Servo servo;
static int currentAngle = SERVO_CLOSED_ANGLE;

void servoBegin()
{
    servo.attach(SERVO_PIN);
    servo.write(SERVO_CLOSED_ANGLE);
    currentAngle = SERVO_CLOSED_ANGLE;
}

void servoSetAngle(int angle)
{
    angle = constrain(angle, SERVO_MIN_ANGLE, SERVO_MAX_ANGLE);
    currentAngle = angle;
    servo.write(angle);
}

void servoOpen()
{
    servoSetAngle(SERVO_OPEN_ANGLE);
}

void servoClose()
{
    servoSetAngle(SERVO_CLOSED_ANGLE);
}

int servoGetAngle()
{
    return currentAngle;
}