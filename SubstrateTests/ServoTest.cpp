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
#include "Servo.h"
void setup() {
	Serial.begin(9600);
}

void loop() {
    auto frontServo = Servo();
    auto backServo = Servo();
    frontServo.attach(18);
    backServo.attach(19);
    
    while (true){
        frontServo.write(0);
        // backServo.write(160)
    }
}