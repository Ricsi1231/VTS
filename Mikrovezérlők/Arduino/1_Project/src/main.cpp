#include <Arduino.h>

uint8_t greenLedTurn = 3;
uint8_t redLed = 7;
uint8_t greenLed = 4;
uint8_t yellowLed = 6;

void setup() {
  for (uint8_t i = 2; i < 8; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
}

void loop() {
  digitalWrite(redLed, HIGH);
  digitalWrite(greenLedTurn, HIGH);
  delay(5000);

  digitalWrite(redLed, LOW);
  digitalWrite(yellowLed, HIGH);
  delay(5000);

  digitalWrite(yellowLed, LOW);
  digitalWrite(greenLedTurn, LOW);
  digitalWrite(greenLed, HIGH);
  delay(5000);

  digitalWrite(greenLed, LOW);
  for (uint8_t i = 0; i < 3; i++) {
    digitalWrite(greenLed, HIGH);
    delay(400);

    digitalWrite(greenLed, LOW);
    delay(400);
  }

  for (uint8_t i = 2; i < 8; i++) {
    digitalWrite(i, LOW);
  }
}