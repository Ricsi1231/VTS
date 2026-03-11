#include <Arduino.h>

uint8_t buzzer = 6;
uint8_t ldr = A0;
int lightValue = 0;
int analogValue = 0;

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(ldr, INPUT);

  Serial.begin(115200);
}

void loop() {
  analogValue = analogRead(ldr);
  lightValue = map(analogValue, 0, 1023, 0, 255);

  tone(buzzer, lightValue);
}
