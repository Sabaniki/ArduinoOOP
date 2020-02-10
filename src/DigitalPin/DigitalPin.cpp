#include "DigitalPin.h"

DigitalPin::DigitalPin(int pin, int IO_Mode): pin(pin), IO_Mode(IO_Mode){
    pinMode(pin, IO_Mode);
    if(IO_Mode == OUTPUT) digitalWrite(pin, LOW);
}
