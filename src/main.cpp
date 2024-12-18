#include <Arduino.h>
#include <ESP32Servo.h>

#ifndef DELAY
#define DELAY 2000
#endif

Servo servo;

int currentAngle = random(0, 89);

void setup() {
  servo.attach(4);
  Serial.begin(9600);
}

void loop() {
  currentAngle = currentAngle < 90 ? currentAngle + 90 : currentAngle - 90;

  servo.write(currentAngle);
  delay(DELAY);
}