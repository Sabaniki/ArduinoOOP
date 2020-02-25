#define DEBUG
#include <Arduino.h>
#include "UltrasonicSensor/UltrasonicSensor.h"
#include "DigitalPin/DigitalPin.h"

void setup() {
    Serial.begin(9600);
}

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wmissing-noreturn"
void loop() {
    auto led = DigitalPin(13, OUTPUT);
    while (true){
        led.write(HIGH);
        delay(5000);
        led.write(LOW);
        delay(5000);
    }
}
#pragma clang diagnostic pop