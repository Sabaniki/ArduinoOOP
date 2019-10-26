#include "AnalogPin.h"
#include "Arduino.h"

AnalogPin::AnalogPin(const int pin, int boundrate): pin(pin){
    if(!digitalPinHasPWM(AnalogPin::pin)){
        if(!Serial.available())
            Serial.begin(boundrate);
        Serial.print(pin);
        Serial.println("pin is not pwm pin!");
    }
}

int AnalogPin::read() {
    return analogRead(AnalogPin::pin);
}

void AnalogPin::write(const int power){
    analogWrite(AnalogPin::pin, power);
}