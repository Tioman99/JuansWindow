#include <Arduino.h>

const int buzzerPin = 2;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(921600);
  Serial.print("Hello World");
}

void loop() {
  digitalWrite(13, HIGH);
  digitalWrite(buzzerPin, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  digitalWrite(buzzerPin, LOW);
  delay(500);
}
