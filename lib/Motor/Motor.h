#ifndef ___Class_Motor
#define ___Class_Motor
#include "AnalogPin.h"
#include "AnalogPin.cpp"
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

#endif
