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
	auto led = DigitalPin(13, OUTPUT);
	while(true){
		led.write(true);
		delay(100);
		led.write(false);
		delay(100);
	}
}