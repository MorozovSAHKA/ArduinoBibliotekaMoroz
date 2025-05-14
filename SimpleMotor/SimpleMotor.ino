#include "SimpleMotor.h"
SimpleMotor motor1(4, 5);
SimpleMotor motor2(6, 7);

void setup() {

}

void loop() {
  motor1.run(250);
  delay(1000);
  motor2.run(250);
  delay(1000);
  motor1.stop();
  delay(1000);
  motor2.stop();
  delay(1000);
}
