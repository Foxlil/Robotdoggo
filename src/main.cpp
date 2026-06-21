#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
#include <Arduino.h>

Adafruit_PWMServoDriver servo = Adafruit_PWMServoDriver();

#define servoMIN 150
#define servoMAX 650

void setup() {
  servo.begin();
  servo.setPWMFreq(60);
}

void loop() {
    servo.setPWM(5, 0, 120);
    servo.setPWM(6, 0, servoMIN);
    delay(1000);
    servo.setPWM(5, 0, 620);
    servo.setPWM(6, 0, servoMAX);
    delay(2000);
}