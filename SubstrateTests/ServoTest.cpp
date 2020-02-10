#define DEBUG
#include <Arduino.h>
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