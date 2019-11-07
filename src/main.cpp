#define DEBUG
#include <Arduino.h>
#include "AnalogPin.h"
#include "DigitalPin.h"
#include "ColorLED.h"
#include "ColorSensor.h"
#include "Motor.h"
#include "PhotoReflector.h"
#include "UltrasonicSensor.h"
void setup() {
}

void loop() {
	auto pin = AnalogPin(A0);
	while (true){
		Serial.print("result: ");
		Serial.println(pin.read());
	}
}