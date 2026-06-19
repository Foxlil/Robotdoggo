#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
#include <Arduino.h>
Adafruit_PWMServoDriver servo = Adafruit_PWMServoDriver();

#define servoMIN 150
#define servoMAX 600

void setup() {
  servo.begin();
  servo.setPWMFreq(60);
  Serial.begin(9600);
}

void loop() {
    Serial.println("Starting");
    servo.setPWM(12, 0, servoMIN);
    delay(1000);
    servo.setPWM(12, 0, servoMAX);
    delay(2000);
}