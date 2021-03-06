#include <Servo.h> 
 
Servo middle, left, right, claw ;  // creates 4 "servo objects"
 
void setup() 
{ 
  Serial.begin(9600);
  middle.attach(11);  // attaches the servo on pin 11 to the middle object
  left.attach(10);  // attaches the servo on pin 10 to the left object
  right.attach(9);  // attaches the servo on pin 9 to the right object
  claw.attach(6);  // attaches the servo on pin 6 to the claw object
} 
 
void loop() 
{ 
  /*
  servoMiddle maximum right turn at 0
  servoMiddle maximum left turn at 180
  servoMiddle center at 90-110 (100)
  servoLeft maximum height at 180
  servoLeft maximum depth at 90
  servoRight maximum reach at 180
  servoRight maximum depth at 80
  servoClaw maximum close at 110
  servoClaw maximum open at 25
  */
  
  middle.write(100); // sets the servo position according to the value(degrees)
  left.write(90); // does the same for left servo
  right.write(80); // and again for right servo
  claw.write(110); // yes you've guessed it.
  
  delay(300); // doesn't constantly update the servos which can fry them

  exit(0);
} 
