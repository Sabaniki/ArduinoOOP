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
    auto motorL = Motor(3, 2);
    auto motorR = Motor(4, 5);
    auto rotaryEncoder = RotaryEncoder(A0, -1); // これは決まり次第変える

    while (true){
        while (rotaryEncoder.until(10)) {
            motorL.write(60);
            motorR.write(60);
			Serial.print("currentCount 1: ");
			Serial.println(rotaryEncoder.getCurrentCount());
        }
        delay(2000);
        while (rotaryEncoder.until(10)) {
            motorL.write(60);
            motorR.write(60);
			Serial.print("currentCount 2: ");
			Serial.println(rotaryEncoder.getCurrentCount());
        }
        delay(2000);
    }
}