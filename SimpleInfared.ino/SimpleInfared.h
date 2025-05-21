#ifndef SimpleInfared_h
#define SimpleInfared_h

#include "Arduino.h"

class SimpleInfared {
  public:
    SimpleInfared(int pin);

    float DistanceMeasure();

    bool ObstacleDetected(float threshold);


  private:
    int _pin;

    float _refVoltage;

    int _readRaw();

    float _rawDistance(int raw);
};

#endif
