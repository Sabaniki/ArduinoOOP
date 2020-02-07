#define DEBUG
#include <Arduino.h>
// #include "AnalogPin.h"
#include "DigitalPin.h"
// #include "DigitalPin.cpp"
// #include "ColorLED.h"
// #include "ColorSensor.h"
#include "Motor.h"
// #include "Motor.cpp"
// #include "PhotoReflector.h"
// #include "UltrasonicSensor.h"
// #include "RotaryEncoder.h"
// #include "RotaryEncoder.cpp"
void setup() {
	// Serial.begin(9600);
}

void loop() {
  auto digital = DigitalPin(8, OUTPUT);
  while (true) {
    digital.write(HIGH);
    delay(5000);

    digital.write(LOW);
    delay(1000);
  }
}