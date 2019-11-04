<<<<<<< HEAD
#ifndef ___Cpp_DigitalPin
#define ___Cpp_DigitalPin
=======
>>>>>>> 07aa2bf6fa64290f2b1119cc7cba8d47c0cd344d
#include "DigitalPin.h"
#include "Arduino.h"

DigitalPin::DigitalPin(int pin, int IO_Mode): pin(pin), IO_Mode(IO_Mode){
    pinMode(pin, IO_Mode);
    digitalWrite(pin, LOW);
}

inline bool DigitalPin::read(){
    return digitalRead(pin);
}

inline void DigitalPin::write(bool mode){
    digitalWrite(pin, mode);
<<<<<<< HEAD
}
#endif
=======
}
>>>>>>> 07aa2bf6fa64290f2b1119cc7cba8d47c0cd344d
