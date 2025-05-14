#ifndef SimpleMotor_h
#define SimpleMotor_h

#include "Arduino.h"

class SimpleMotor {
  public:
    SimpleMotor(int pinPWM, int pinDir);
    
    SimpleMotor(int pinPWM);
    
    void run(int speed);
    
    void stop();

  private:
    int _pinPWM;
    int _pinDir;
    bool _isDirControl;
};

#endif
