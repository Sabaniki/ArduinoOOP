#include "DigitalPin.h"
#include "Arduino.h"

DigitalPin::DigitalPin(const int _pin, const int _IO_Mode): pin(_pin), IO_Mode(_IO_Mode){
    pinMode(DigitalPin::pin, DigitalPin::IO_Mode);
    digitalWrite(DigitalPin::pin, LOW);
}

bool DigitalPin::read(){
    return digitalRead(DigitalPin::pin);
}

void DigitalPin::write(bool mode){
    digitalWrite(DigitalPin::pin, mode);
}