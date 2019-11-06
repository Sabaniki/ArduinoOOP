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
    if(sumOfDeviation > threshold){
        result = true;
        sumOfDeviation = 0;
    }
    else if (sumOfDeviation < -threshold){
        result = false;
        sumOfDeviation = 0;
    }
    beforeValue = nextValue;
    return result;
}
#endif
