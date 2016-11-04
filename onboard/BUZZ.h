#ifndef BUZZ_h
#define BUZZ_h

#include <stdio.h>
#include <Arduino.h>

class BUZZ
{
public:
    BUZZ(int buzzPin);
    ~BUZZ();
    
    enum{
        ON,
        OFF
    };
    
    void beep(void); // Toque intermitente a cada segundo
    void beeper(int n); //
    int getBuzzPin();
private:
    int buzzPin = 0; // Information for some function who needs this
};


#endif
