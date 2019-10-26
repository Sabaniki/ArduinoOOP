#include "DigitalPin.h"
#include "Arduino.h"

DigitalPin::DigitalPin(const int pin, const int IO_Mode): pin(pin), IO_Mode(IO_Mode){
    pinMode(DigitalPin::pin, DigitalPin::IO_Mode);
    digitalWrite(DigitalPin::pin, LOW);
}

bool DigitalPin::read(){
    return digitalRead(DigitalPin::pin);
}

void DigitalPin::write(bool mode){
    digitalWrite(DigitalPin::pin, mode);
}