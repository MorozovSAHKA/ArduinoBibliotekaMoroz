#include "SimpleMotor.h"

SimpleMotor::SimpleMotor(int pinPWM, int pinDir) {
  _pinPWM = pinPWM;
  _pinDir = pinDir;
  _isDirControl = true;
  
  pinMode(_pinPWM, OUTPUT);
  pinMode(_pinDir, OUTPUT);
}

SimpleMotor::SimpleMotor(int pinPWM) {
  _pinPWM = pinPWM;
  _isDirControl = false;
  
  pinMode(_pinPWM, OUTPUT);
}

void SimpleMotor::run(int speed) {
  speed = constrain(speed, -255, 255);
  
  if(_isDirControl) {
    if(speed > 0) {
      digitalWrite(_pinDir, HIGH);
      analogWrite(_pinPWM, speed);
    } else if(speed < 0) {
      digitalWrite(_pinDir, LOW);
      analogWrite(_pinPWM, -speed);
    } else {
      analogWrite(_pinPWM, 0);
    }
  } else {
    if(speed >= 0) {
      analogWrite(_pinPWM, speed);
    } else {
      analogWrite(_pinPWM, 0);
    }
  }
}

void SimpleMotor::stop() {
  analogWrite(_pinPWM, 0);
}
