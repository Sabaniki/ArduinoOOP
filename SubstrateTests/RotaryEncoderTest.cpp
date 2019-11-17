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
    auto motorL = Motor(4, 5);
    auto motorR = Motor(2, 3);
    auto rotaryEncoder = RotaryEncoder(-1, -1); // これは決まり次第変える

    while (true){
        while (rotaryEncoder.until(10)) {
            motorL.write(120);
            motorR.write(255);
        }
        delay(2000);
        while (rotaryEncoder.until(10)) {
            motorL.write(100);
            motorR.write(100);
        }
        delay(2000);
    }
}