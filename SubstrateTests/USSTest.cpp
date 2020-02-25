#define DEBUG
#include <Arduino.h>
#include "UltrasonicSensor/UltrasonicSensor.h"
#include "DigitalPin/DigitalPin.h"

void setup() {
    Serial.begin(9600);
}

void loop() {
    auto vcc = DigitalPin(22, OUTPUT);
    vcc.write(HIGH);
    delay(50);
    auto uccSensor = UltrasonicSensor(10, 11);
    while (true){
        Serial.print(uccSensor.readDistance());
        Serial.println(" cm");
    }
}