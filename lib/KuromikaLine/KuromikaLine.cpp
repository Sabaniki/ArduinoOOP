#ifndef ___Cpp_KuromikaLine
#define ___Cpp_KuromikaLine
#include "KuromikaLine.h"
#include "Arduino.h"

KuromikaLine::KuromikaLine(int greenPin, int readerPin, int threshold):
    threshold(threshold),
    greenLED(greenPin, OUTPUT),
    reader(readerPin){
    greenLED.write(true);
}

inline bool KuromikaLine::read(){
    return (reader.read() < threshold);
}

inline void KuromikaLine::setNumOfIteration(int numOfIteration){
    this->numOfIteration = numOfIteration;
}
#endif
