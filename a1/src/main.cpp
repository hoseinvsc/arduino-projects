#include <Arduino.h> 

const int ledPin = 9; 
int brightness = 0; 

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  for (brightness = 0; 
    brightness <= 255; 
    brightness++) {
    analogWrite(ledPin, brightness); 
    delay(10); 
  }

  for (brightness = 255; 
    brightness >= 0; 
    brightness--) {
    analogWrite(ledPin, brightness); 
    delay(10); 
  }
}