

#ifndef Blink_h
#define Blink_h

#include "Arduino.h"

class Blink
{
  public:
    blink(int pin);
    void on();
    void off();
  private:
    int _pin;
};

#endif
