#ifndef ___Cpp_AnalogPin
#define ___Cpp_AnalogPin
#include "AnalogPin.h"
// #include "Arduino.h"

AnalogPin::AnalogPin(const int pin):
    pin(pin),
    useOffset(false){
}

AnalogPin::AnalogPin(const int pin, int offset):
    pin(pin),
    offset(offset),
    useOffset(true)
    {
}
AnalogPin::AnalogPin(): pin(-999), useOffset(false) {}

#endif
