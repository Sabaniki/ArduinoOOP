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
void setup() {
	Serial.begin(9600);
}

void loop() {
	auto xPin = AnalogPin(A0);
	auto yPin = AnalogPin(A1);
	const float baseX = 1.48;
	const float baseY = 1.48;
	const float dt = 1.000;

	while (true) {
		float x = xPin.read();
		float y = yPin.read();
		float degX = 0;
		float degY = 0;
		float vecX = 0;
		float vecY = 0;

		

		x *= 5;
		x /= 1023;

		y *= 5;
		y /= 1023;

		Serial.print("x: ");
		Serial.print(x);
		Serial.print(", ");

		Serial.print("y: ");
		Serial.print(y);
		Serial.println("");

		vecX = (x - baseX) / (0.67 / 1000);
		vecY = (y - baseY) / (0.67 / 1000);
		Serial.print("g1: ");
		Serial.print(vecX);
		Serial.print(", ");
		Serial.print("g2: ");
		Serial.println(vecY);
		degX += vecX*dt;
		degY += vecY*dt;
		Serial.print("degX:");
		Serial.print(degX);
		Serial.print(", ");
		Serial.print("degY:");
		Serial.println(degY);
		delay(1000);
		// Serial.print(x);
		// Serial.print(",");
		// Serial.print(y);
		// Serial.println("");
	}
	
}