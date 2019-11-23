#define DEBUG
#include <Arduino.h>
#include "AnalogPin.h"
#include "DigitalPin.h"
#include "DigitalPin.cpp"
#include "ColorLED.h"
#include "ColorSensor.h"
#include "Motor.h"
#include "Motor.cpp"
#include "PhotoReflector.h"
#include "UltrasonicSensor.h"
#include "RotaryEncoder.h"
#include "RotaryEncoder.cpp"
void setup() {
	Serial.begin(9600);
}

void loop() {
    auto motorL = Motor(3, 2);
    auto motorR = Motor(5, 4);
    RotaryEncoder rotaryEncoders[] = {
        RotaryEncoder(A0, 950),
        RotaryEncoder(A1, 980)
    };

    const int distance = 19;
    const int speed = 100;

    int leftPower = 0, rightPower = 0;
    const int L = 0, R = 1;
    bool state[2] = {true, true};

    delay(3000);
    while (state[L] || state[R]){
        Serial.print("current L: ");
        Serial.println(rotaryEncoders[0].getCurrentCount());
        Serial.println();
        
        Serial.print("current R: ");
        Serial.println(rotaryEncoders[1].getCurrentCount());
        Serial.println();

        for (int i = 0; i < 2; i++)
            if (state[i])
                state[i] = rotaryEncoders[i].until(distance);
        if (state[L])
            leftPower = speed;
        else
        {
            state[L] = false;
            leftPower = 0;
        }
        if (state[R])
            rightPower = speed;
        else
        {
            state[R] = false;
            rightPower = 0;
        }
        motorL.write(leftPower);
        motorR.write(rightPower);
    }
    motorL.write(0);
    motorR.write(0);

    while (true);
}