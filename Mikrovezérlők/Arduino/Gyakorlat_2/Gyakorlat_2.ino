uint8_t leds[8] = {2, 3, 4, 5, 6, 7, 8, 9};
uint8_t temperatureLeds[3] = {10, 11, 12};
uint8_t temperatureSensor = A4;
uint8_t potentiometer = A5;

int delayTime = 1000;

int analogInputValue = 0; 
float voltage = 0;         
float temperature = 0;
float temperatureThreshold = 20.0;

int adcMinValue = 0;
int adcMaxValue = 1023;
float adcMinVoltage = 0.0; 
float adcMaxVoltage = 5.0;

void setup() {
  for (uint8_t i = 0; i < 8; i++) {
    pinMode(leds[i], OUTPUT);
    digitalWrite(leds[i], LOW);
  }
  
  for (uint8_t i = 0; i < 3; i++) {
    pinMode(temperatureLeds[i], OUTPUT);
    digitalWrite(temperatureLeds[i], LOW);
  }
  
  pinMode(temperatureSensor, INPUT);
  pinMode(potentiometer, INPUT);
  
  Serial.begin(115200);
}

void task1();
void task2();
void task3();

void loop() {
  task1();
}

void task1() {
  analogInputValue = analogRead(potentiometer);
  voltage = (float)analogInputValue * 
  (adcMaxVoltage / (float)adcMaxValue);
  
  Serial.print("ADC beolvasott erteke:");
  Serial.println(analogInputValue);
  Serial.print("Feszultseg:");
  Serial.println(voltage);
  
  delay(500);
}

void task2() {
  analogInputValue = analogRead(temperatureSensor);
  voltage = (float)analogInputValue * 
  (adcMaxVoltage / (float)adcMaxValue);
  temperature = (voltage - 0.5) * 100.0;

  if (temperature < temperatureThreshold) {
    digitalWrite(temperatureLeds[0], HIGH);
    digitalWrite(temperatureLeds[1], HIGH);
    digitalWrite(temperatureLeds[2], HIGH);
  } else if (temperature < temperatureThreshold + 2.0) {
    digitalWrite(temperatureLeds[0], HIGH);
    digitalWrite(temperatureLeds[1], HIGH);
    digitalWrite(temperatureLeds[2], LOW);
  } else if (temperature < temperatureThreshold + 5.0) {
    digitalWrite(temperatureLeds[0], HIGH);
    digitalWrite(temperatureLeds[1], LOW);
    digitalWrite(temperatureLeds[2], LOW);
  } else {
    digitalWrite(temperatureLeds[0], LOW);
    digitalWrite(temperatureLeds[1], LOW);
    digitalWrite(temperatureLeds[2], LOW);
  }
  
  Serial.print("Feszultseg:");
  Serial.println(voltage);
  Serial.print("Homerseklet:");
  Serial.println(temperature);
  
  delay(500);
}

void task3() {
  for (uint8_t i = 0; i < 8; i++) {
    digitalWrite(leds[i], HIGH); 
    delay(delayTime);            
    digitalWrite(leds[i], LOW);  
    
    if (delayTime > 1) {
      delayTime = delayTime / 2;
    }
  }
  delayTime = 2000; 
}
