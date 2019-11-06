#ifndef ___Cpp_KuromikaLine
#define ___Cpp_KuromikaLine
#include "KuromikaLine.h"
#include "Arduino.h"

KuromikaLine::KuromikaLine(int greenPin, int readerPin, int threshold):
    reader(readerPin),
    threshold(threshold),
    green(greenPin, OUTPUT) {
    green.write(true);
    beforeValue = reader.read();
}

bool KuromikaLine::read(){
    nextValue = reader.read();
    sumOfDeviation += (beforeValue - nextValue);
    if(abs(sumOfDeviation) > threshold){
        result = !result;
        sumOfDeviation = 0;
    }
    beforeValue = nextValue;
    return result;
}
#endif
