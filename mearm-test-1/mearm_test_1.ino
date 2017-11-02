#include <Servo.h> 
 
Servo servoMiddle;
Servo servoLeft;
Servo servoRight;
Servo servoClaw;

void setup() {
  Serial.begin(9600);
  servoMiddle.attach(11);
  servoLeft.attach(10);
  servoRight.attach(9);
  servoClaw.attach(6);
}

void loop() {

  // servoMiddle maximum right turn at 0
  // servoMiddle maximum left turn at 180
  // servoMiddle center at 90-100
  
  // servoLeft maximum height at 180
  // servoLeft maximum depth at 90
  
  // servoRight maximum reach at 180
  // servoRight maximum depth at 80
  
  // servoClaw maximum close at 110
  // servoClaw maximum open at 25
  
  // starting position
  servoMiddle.write(100);
  servoLeft.write(90);
  servoRight.write(80);
  servoClaw.write(110);

  delay(1000);

  servoMiddle.write(130);

  delay(1000);

  servoRight.write(120);
  servoLeft.write(100);
  servoClaw.write(50);

  delay(500);

  servoClaw.write(110);

  delay(500);

  servoLeft.write(180);
  servoRight.write(90);

  delay(500);

  servoMiddle.write(40);

  delay(1000);

  servoClaw.write(50);

  delay(1000);

  servoMiddle.write(100);
  servoLeft.write(90);
  servoRight.write(80);
  servoClaw.write(100);
  
  delay(2000);
  
  exit(0);
}

