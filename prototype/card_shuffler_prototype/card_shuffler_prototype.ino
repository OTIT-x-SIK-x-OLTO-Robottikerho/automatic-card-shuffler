#include <Servo.h>

Servo left;
Servo right;
int angleLeft;

#define servoPinLeft 0
#define servoPinRight 20

void setup() {
  // put your setup code here, to run once:
  left.attach(servoPinLeft);
  right.attach(servoPinRight);
  angleLeft = 90;
}

void loop() {
  // put your main code here, to run repeatedly:
  
  left.write(angleLeft);
  angleLeft += 10;
  if (angleLeft == 360) {
    angleLeft = 0;
  }
  delay(10);
}
