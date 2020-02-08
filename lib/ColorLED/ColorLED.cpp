#include "ColorLED.h"
#include "Arduino.h"

ColorLED::ColorLED(int redPin, int greenPin, int bluePin): 
    red(redPin, OUTPUT), green(greenPin, OUTPUT), blue(bluePin, OUTPUT)  {

}

