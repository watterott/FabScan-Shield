/*
  Using a Servo Motor with FabScan-Shield.
  Further infos: http://arduino.cc/en/Reference/Servo
*/

#include <Servo.h> 

Servo myservo;

void setup()
{ 
  myservo.attach(3); //3 or 6 or 12 or A1
} 

void loop() 
{ 
  myservo.write(0); //0...180
  delay(2000);
  myservo.write(90);
  delay(2000);
  myservo.write(180);
  delay(2000);
}
