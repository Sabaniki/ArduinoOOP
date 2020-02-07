#pragma once
#include "RotaryEncoder.h"
// #include "PhotoReflector.h"
// #include "PhotoReflector.cpp"
#include "Arduino.h"
#include "PhotoReflector.h"
// #include "PhotoReflector.cpp"
class RotaryEncoder {
private:
    int currentCount = 0;
    bool finished = true, beforeState = false, nowState = false;
    PhotoReflector pht;

public:
    RotaryEncoder(int readerPin, int thresholdOfPht);
    bool until(int times);
    int getCurrentCount();
};
