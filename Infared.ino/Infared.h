#ifndef SimpleInfared_h
#define SimpleInfared_h

#include "Arduino.h"

class SimpleMotor {
  public:
    SimpleInfared(int pinV0);

    void send();

    void receive();

  private:
    int _pinV0;
};

#endif
