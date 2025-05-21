#include "SimpleInfared.h"
SimpleInfared sensor(A0);

void setup() {
  Serial.begin(9600);
  Serial.println("Тест инфракрасного датчика");
}

void loop() {
  float distance = sensor.DistanceMeasure();
  
  Serial.println("Дистанция:");
  Serial.println(String(distance) + "см");

  if(sensor.ObstacleDetected(15)) {
    Serial.println("Предмет слишком близко");
  }

  delay(500);
}
