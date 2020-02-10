#pragma once
#include "RotaryEncoder.h"
#include "Arduino.h"
#include "PhotoReflector/PhotoReflector.h"

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
