#include "SimpleInfared.h"

SimpleInfared::SimpleInfared(int pin) {
  _pin = pin;
  _refVoltage = 5.0;
  pinMode(_pin, INPUT);
}

int SimpleInfared::_readRaw() {
  return analogRead(_pin);
}

float SimpleInfared::_rawDistance(int raw) {
  if(raw <= 0) return 999.9;
  float voltage = raw * (_refVoltage / 1023.0);
  return 27.728 * pow(voltage, -1.2045);
}

float SimpleInfared::DistanceMeasure() {
  int raw = _readRaw();
  return _rawDistance(raw);
}

bool SimpleInfared::ObstacleDetected(float threshold) {
  float distance = DistanceMeasure();
  return (distance <= threshold && distance > 0);
}
