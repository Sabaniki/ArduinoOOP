#define DEBUG
#include "Timer.h"
#include "Arduino.h"

class Hoge{
private:
    /* data */
public:
    void print() { Serial.println("Hoge::print called!"); }
};


void setup() {
    Serial.begin(9600);
}

void loop() {
    auto timer1 = Timer(5000, false, [](){
        Serial.println("on timer1's non-named callback!");
    });
    auto timer2 = Timer(7000, false, ((void (*)())&Hoge().print));
    timer1.start();
    timer2.start();
    while (timer1.getIsUnreached() || timer2.getIsUnreached()) {
        timer1.update();
        timer2.update();
    }
    while (true);
}