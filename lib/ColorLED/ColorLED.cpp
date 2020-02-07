#ifndef ___Cpp_ColorLED
#define ___Cpp_ColorLED
#include "ColorLED.h"
#include "Arduino.h"

ColorLED::ColorLED(int redPin, int greenPin, int bluePin): 
    red(redPin, OUTPUT), green(greenPin, OUTPUT), blue(bluePin, OUTPUT)  {

}


#endif