#define DEBUG
#include <Arduino.h>
#include "Motor/Motor.h"

void setup() {
	Serial.begin(9600);
}

void loop() {
    auto motorL = Motor(4, 5);
    auto motorR = Motor(3, 2);

    while (true){
        motorL.write(130);
        motorR.write(130 * 2.0);
    }
    
}