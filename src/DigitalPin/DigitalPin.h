#pragma once
#include "DigitalPin.h"
#include "Arduino.h"
class DigitalPin{
private:
    int pin;
    int IO_Mode;

public:
    DigitalPin(int pin, int IO_Mode);
    // bool read();
    // void write(const bool mode);
    // int getPinNumber();
    // int getIO_Mode();

    bool read(){
        return digitalRead(pin);
    }

    void write(bool mode){
        digitalWrite(pin, mode);
    }

    int getPinNumber(){
        return pin;
    }

    int getIO_Mode(){
        return IO_Mode;
    }
};
