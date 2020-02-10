#include "AnalogPin.h"

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
