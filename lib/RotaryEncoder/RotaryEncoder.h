#ifndef ___Class_RotaryEncoder
#define ___Class_RotaryEncoder
#include "PhotoReflector.h"
#include "PhotoReflector.cpp"
class RotaryEncoder {
private:
    int whiteCount = 0, blackCount = 0, currentCount = 0;
    bool finished = true;
    PhotoReflector reader;

public:
    RotaryEncoder(int readerPin);
    bool until(int times);
};

#endif