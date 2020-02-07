#ifndef ___Cpp_UltrasonicSensor
#define ___Cpp_UltrasonicSensor
#include "UltrasonicSensor.h"
// #include "Arduino.h"

UltrasonicSensor::UltrasonicSensor(int triggerPin, int echoPin): 
echoPin(echoPin),
trigger(triggerPin, OUTPUT) {
    pinMode(echoPin, INPUT);
}

double UltrasonicSensor::readDistance() {
    dis = 0;
    for (int i = 0; i < 1; i++){
        trigger.write(1);
        delayMicroseconds(2);
        trigger.write(0);
        readTime = pulseIn(echoPin, HIGH) / 2.0;
        dis = readTime * 340.29 * 100 / 1000000;
    }
    return dis;
}
#endif