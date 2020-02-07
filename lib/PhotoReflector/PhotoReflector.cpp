#ifndef ___Cpp_PhtoReflector
#define ___Cpp_PhtoReflector
#include "PhotoReflector.h"
// #include "DigitalPin.h"
// #include "DigitalPin.cpp"
// #include "Arduino.h"

PhotoReflector::PhotoReflector(int pin):
    readerPinD(pin, INPUT_PULLUP),
    readerPinA(-1),
    isBlack(false),
    useAsDigital(true),
    threshold(-1) {
    readerPinA.~AnalogPin();
}

PhotoReflector::PhotoReflector(int pin, int threshold):
    readerPinD(-1, -1),
    readerPinA(pin),
    isBlack(false),
    useAsDigital(false),
    threshold(threshold)
    {
    readerPinD.~DigitalPin();
}

inline bool PhotoReflector::read(){
    isBlack = useAsDigital? readerPinD.read(): (readerPinA.read() < threshold);
    return isBlack;
}

inline bool PhotoReflector::getIsBlack(){
    return isBlack;
}
#endif