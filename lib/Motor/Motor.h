#pragma once
#include "AnalogPin.h"
// #include "AnalogPin.cpp"
#include "Motor.h"
#include "Arduino.h"
class Motor {
private:
    void stop();
    enum MotorMode { Front, Back, Brake };
    AnalogPin front, back;
    MotorMode mode;
public:
    Motor(int Fpin, int Bpin);
    void write(int speed);
};

