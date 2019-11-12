#ifndef ___Class_AnalogPin
#define ___Class_AnalogPin

class AnalogPin{
private:
    int pin, offset;
    bool useOffset;

public:
    AnalogPin(const int pin);
    AnalogPin(const int pin, int offset);
    AnalogPin();
    int read();
    void write(const int power);
    void initPin(int pin);
    int getPinNum();
};

#endif
