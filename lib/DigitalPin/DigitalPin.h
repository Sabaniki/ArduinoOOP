#ifndef ___Class_DigitalPin
#define ___Class_DigitalPin

class DigitalPin{
private:
    int pin;
    int IO_Mode;

public:
    DigitalPin(int pin, int IO_Mode);
    bool read();
    void write(const bool mode);
};
<<<<<<< HEAD
=======

>>>>>>> 07aa2bf6fa64290f2b1119cc7cba8d47c0cd344d
#endif