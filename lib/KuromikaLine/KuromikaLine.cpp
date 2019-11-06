#ifndef ___Cpp_KuromikaLine
#define ___Cpp_KuromikaLine
#include "KuromikaLine.h"
#include "Arduino.h"

KuromikaLine::KuromikaLine(int greenPin, const int (&readerPins)[4], int threshold):
    threshold(threshold),
    green(greenPin, OUTPUT) {
    for (size_t i = 0; i < 4; i++)
        readers[i].initPin(readerPins[i]);
    green.write(true);
}

bool KuromikaLine::read(){
    beforeValue = readers[0].read();
    nextValue = readers[0].read();
    diff = beforeValue - nextValue;
    bool isOverRange = abs(diff) > threshold;
    if(isOverRange)
        result = !result;
    beforeValue = nextValue;
    return result;
}
#endif
