#ifndef ___Class_AnalogPin
#define ___Class_AnalogPin

class AnalogPin{
private:
    int pin;

public:
    AnalogPin(const int _pin);
    int read();
    void write(const int power);
};

#endif
