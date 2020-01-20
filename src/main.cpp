#define DEBUG
#include <Arduino.h>
#include "AnalogPin.h"
#include "DigitalPin.h"
#include "DigitalPin.cpp"
#include "ColorLED.h"
#include "ColorSensor.h"
#include "Motor.h"
#include "Motor.cpp"
#include "PhotoReflector.h"
#include "UltrasonicSensor.h"
#include "RotaryEncoder.h"
#include "RotaryEncoder.cpp"

  DigitalPin switchPins[8] = {
      DigitalPin(18, INPUT_PULLUP), DigitalPin(28, INPUT_PULLUP),
      DigitalPin(32, INPUT_PULLUP), DigitalPin(36, INPUT_PULLUP),
      DigitalPin(40, INPUT_PULLUP), DigitalPin(44, INPUT_PULLUP),
      DigitalPin(49, INPUT_PULLUP), DigitalPin(52, INPUT_PULLUP)
  };
  DigitalPin LEDPins[8] = {
      DigitalPin(19, OUTPUT), DigitalPin(26, OUTPUT), 
      DigitalPin(30, OUTPUT), DigitalPin(34, OUTPUT),
      DigitalPin(38, OUTPUT), DigitalPin(42, OUTPUT),
      DigitalPin(47, OUTPUT), DigitalPin(50, OUTPUT)
  };

void setup() {
	Serial.begin(9600);
    for (size_t i = 0; i < 8; i++) {
      LEDPins[i].write(LOW);
    }
}

void loop() {
  while (true) {
    for (size_t i = 0; i < 8; i++)
      LEDPins[i].write(switchPins[i].read());
  }
}