#pragma once
#include "Arduino.h"
class AnalogPin{
private:
    int pin, offset;
    bool useOffset;

public:
    explicit AnalogPin(int pin);
    AnalogPin(int pin, int offset);
    AnalogPin();

    int read() {
        return useOffset? (analogRead(pin) - offset): analogRead(pin);
    }

    void write(const int power){
        analogWrite(pin, power);
    }

    void initPin(int pin){
        if(this->pin == -999) this->pin = pin;
        else {
            Serial.print("pin: ");
            Serial.print(this->pin);
            Serial.println(" is already initialized");
        }
    }

    int getPinNum(){
        return pin;
    }
};

