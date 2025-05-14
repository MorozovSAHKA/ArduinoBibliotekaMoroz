#include "SimpleInfared.h"

SimpleInfared::SimpleInfared(int pinV0) {
  _pinV0 = pinV0;

  pinMode(_pinV0, INPUT);
}

void SimpleInfared::send() {
  if(_pinV0) {
    if(distance > 10) {
      
    }
  }
}
