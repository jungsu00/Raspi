#include <Servo.h> 
 
int servoPin = 9;

Servo servo; 

int angle = 0; // servo position in degrees 

void setup() 
{ 
    servo.attach(servoPin); 
} 


void loop() 
{ 
  // scan from 0 to 180 degrees
  for(angle = 60; angle < 160; angle++) 
  { 
    servo.write(angle); 
    delay(30); 
  } 
  // now scan back from 180 to 0 degrees
  for(angle = 160; angle > 60; angle--) 
  { 
    servo.write(angle); 
    delay(30); 
  } 
} 
