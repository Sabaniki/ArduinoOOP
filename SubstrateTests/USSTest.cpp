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
#include "Server.h"
#include "UltrasonicSensor.h"
#include "UltrasonicSensor.cpp"
void setup() {
	Serial.begin(9600);
}

void loop() {
    UltrasonicSensor uccSensors[2] = {
        UltrasonicSensor(12, 13),
        UltrasonicSensor(10, 11),
    };
    while (true){
        for(int i = 0; i < 2; i++) {
            Serial.print(i);
            Serial.println(": ");
            Serial.print(uccSensors[2].readDistance());
            Serial.println("cm");
        }
        Serial.println();
    }
}