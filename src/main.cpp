#define DEBUG
#include "Timer.h"
#include "Arduino.h"
void setup() {
	Serial.begin(9600);
}

void loop() {
    auto timer1 = Timer(5000, false, [](){
        Serial.println("on timer1's non-named callback!");
    });
    auto timer2 = Timer(7000, false, [](){
        Serial.println("on timer2's non-named callback!");
    });
    timer1.start();
    timer2.start();
    while (timer1.getIsUnreached() || timer2.getIsUnreached()) {
        timer1.update();
        timer2.update();
    }
    while (true);
}