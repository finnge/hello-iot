#include <Arduino.h>

#define PIN 33

void setup() {
  pinMode(PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  Serial.println("looping");
  digitalWrite(PIN, HIGH);
  delay(100);

  digitalWrite(PIN, LOW);
  delay(5000);
  // put your main code here, to run repeatedly:
}