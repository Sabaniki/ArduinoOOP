#pragma once
#include "UltrasonicSensor.h"
#include "Arduino.h"
#include "DigitalPin/DigitalPin.h"
// #include "DigitalPin.cpp"
class UltrasonicSensor {
private:
    int echoPin, readTime, dis;
    const int loopNum = 10;
    DigitalPin trigger;

public:
    UltrasonicSensor(int triggerPin, int echoPin);
    double readDistance();
};

