#ifndef ___Cpp_Motor
#define ___Cpp_Motor
#include "Motor.h"
#include "Arduino.h"

Motor::Motor(int Fpin, int Bpin):
front(Fpin),
back(Bpin),
mode(Brake) {

}

void Motor::stop() {
    front.write(0);
    back.write(0);
    delayMicroseconds(100);
}

void Motor::write(int speed) {
    speed = constrain(speed, -255, 255);
    if(speed > 0){
        if(mode != Front)
            stop();
        front.write(speed);
        back.write(0);
        mode = Front;
    }
    else if(!speed){
        if(mode != Brake)
            stop();
        front.write(255);
        back.write(255);
        mode = Brake;
    }
    else {
        if(mode != Back)
            front.write(0);
            back.write(-speed);
        mode = Back;
    }
}
#endif