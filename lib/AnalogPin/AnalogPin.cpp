#ifndef ___Cpp_AnalogPin
#define ___Cpp_AnalogPin
#include "AnalogPin.h"
#include "Arduino.h"

AnalogPin::AnalogPin(const int pin, int boundrate): pin(pin){
    // if(!digitalPinHasPWM(pin)){
    //     if(!Serial.available())
    //         Serial.begin(boundrate);
    //     Serial.print(pin);
    //     Serial.println("pin is not pwm pin!");
    // }
}

AnalogPin::AnalogPin(): pin(-999) {}

inline int AnalogPin::read() {
    return analogRead(pin);
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
#endif
