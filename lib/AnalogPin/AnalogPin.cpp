#ifndef ___Cpp_AnalogPin
#define ___Cpp_AnalogPin
#include "AnalogPin.h"
#include "Arduino.h"

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

inline int AnalogPin::read() {
    return useOffset? (analogRead(pin) - offset): analogRead(pin);
}

inline void AnalogPin::write(const int power){
    analogWrite(pin, power);
}

inline void AnalogPin::initPin(int pin){
    if(this->pin == -999) this->pin = pin;
    else {
        Serial.print("pin: ");
        Serial.print(this->pin);
        Serial.println(" is already initialized");
    }
}

inline int AnalogPin::getPinNum(){
    return pin;
}
#endif
