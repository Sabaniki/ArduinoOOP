#ifndef ___Class_RotaryEncoder
#define ___Class_RotaryEncoder
#include "PhotoReflector.h"
#include "PhotoReflector.cpp"
class RotaryEncoder {
private:
    int whiteCount = 0, blackCount = 0, currentCount = 0;
    bool finished = true, beforeState = false, nowState = false, first = true;
    PhotoReflector pht;
    void (RotaryEncoder::*myCallback)();

public:
    RotaryEncoder(int readerPin);
    void setCallback(void (RotaryEncoder::*callback)());
    bool until(int times);
    int getCurrentCount();
};

#endif
