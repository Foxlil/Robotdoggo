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
  servo.setPWM(13, 0, 110);
  servo.setPWM(14, 0, 130);
  delay(2000);
  servo.setPWM(13, 0, 600);
  servo.setPWM(14, 0, 630);
  delay(2000);

  servo.setPWM(9, 0, 650);
  servo.setPWM(10, 0, 640);
  delay(2000);
  servo.setPWM(9, 0, 150);
  servo.setPWM(10, 0, 120);
  delay(2000);

  servo.setPWM(5, 0, 120);
  servo.setPWM(6, 0, 120);
  delay(2000);
  servo.setPWM(5, 0, 620);
  servo.setPWM(6, 0, 650);
  delay(2000);

  servo.setPWM(1, 0, 605);
  servo.setPWM(2, 0, 650);
  delay(2000);
  servo.setPWM(1, 0, 110);
  servo.setPWM(2, 0, 110);
  delay(2000);
}