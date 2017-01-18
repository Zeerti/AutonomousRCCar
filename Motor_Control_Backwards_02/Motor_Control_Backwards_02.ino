#include <Servo.h>

Servo servo1;

//FOR BUGGIE
//minReverseSpeed = 82;
//minForwardSpeed = 96;

//FOR TRUCK
//minReverseSpeed = 80;
//minForwardSpeed = 98;

void setup() 
{
   Serial.begin(9600);
   servo1.attach(9);

}

void loop() 
{
  servo1.write(90);
  delay(100);
  //servo1.write(90);
  //delay(100);
  //servo1.write(90);
  //delay(100);
  
  int i;
  for(i = 180; i >= 0; i--)
  {
    //90 = Neutral
    //Min 80 -- 82 reverse
    //Min 96 -- 97 forward
    servo1.write(80);
    
    delay(20);  
  }
  
  delay(500);
   

}
