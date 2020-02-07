#define DEBUG
#include <Arduino.h>
// #include "AnalogPin.h"
#include "DigitalPin.h"
// #include "DigitalPin.cpp"
// #include "ColorLED.h"
// #include "ColorSensor.h"
#include "Motor.h"
// #include "Motor.cpp"
// #include "PhotoReflector.h"
// #include "UltrasonicSensor.h"
// #include "RotaryEncoder.h"
// #include "RotaryEncoder.cpp"
void setup() {
	Serial.begin(9600);
}

void loop() {
    auto motorL = Motor(10, 11);
    auto motorR = Motor(12, 13);
    auto start = DigitalPin(28, INPUT);

    while (true){
      while (!start.read())
        ;

      Serial.println("straight");
      motorL.write(255);
      motorR.write(255);
      delay(3000);

      Serial.println("left");
      motorL.write(-255);
      motorR.write(255);
      delay(3000);

      Serial.println("right");
      motorL.write(255);
      motorR.write(-255);
      delay(3000);

      Serial.println("back");
      motorL.write(-255);
      motorR.write(-255);
      delay(3000);
    }
}