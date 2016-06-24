#include <Servo.h>

Servo fd, rd;

int potpin = 0;  
int val;   

void setup()
{
  fd.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() 
{ 
  val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023) 
  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180) 
  fd.write(val);                  // sets the servo position according to the scaled value 
  delay(15);                           // waits for the servo to get there 
} 
