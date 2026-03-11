#include <Arduino.h>

int rgb[3] = {5, 6, 10};

void setup() {
  for (int i = 0; i < 3; i++) {
    pinMode(rgb[i], OUTPUT);
  } 

  Serial.begin(115200);
}

void loop() {
  analogWrite(rgb[0], 255);
  analogWrite(rgb[1], 0);
  analogWrite(rgb[2], 0);
  delay(1000);

  analogWrite(rgb[0], 0);
  analogWrite(rgb[1], 255);
  analogWrite(rgb[2], 0);
  delay(1000);

  analogWrite(rgb[0], 0);
  analogWrite(rgb[1], 0);
  analogWrite(rgb[2], 255);
  delay(1000);

  analogWrite(rgb[0], 255);
  analogWrite(rgb[1], 255);
  analogWrite(rgb[2], 255);
  delay(1000);

  analogWrite(rgb[0], 255);
  analogWrite(rgb[1], 0);
  analogWrite(rgb[2], 255);
  delay(1000);

  analogWrite(rgb[0], 0);
  analogWrite(rgb[1], 255);
  analogWrite(rgb[2], 255);
  delay(1000);

  analogWrite(rgb[0], 255);
  analogWrite(rgb[1], 255);
  analogWrite(rgb[2], 0);
  delay(1000);
}
