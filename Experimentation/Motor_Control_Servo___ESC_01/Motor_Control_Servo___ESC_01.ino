#include <Servo.h>

Servo servo;

Servo esc;

//FOR BUGGIE
//minReverseSpeed = 82;
//minForwardSpeed = 96;

//FOR TRUCK
//minReverseSpeed = 80;
//minForwardSpeed = 98;

void setup() 
{
   Serial.begin(9600);
   servo.attach(9);
   esc.attach(8);

}

void loop() 
{
  esc.write(90);
  delay(100);
  //servo1.write(90);
  //delay(100);
  //servo1.write(90);
  //delay(100);
  servo.write(180);
  delay(1000);
  servo.write(0);
  delay(1000);
  int i;
  for(i = 180; i >= 0; i--)
  {
    //90 = Neutral
    //Min 80 -- 82 reverse
    //Min 96 -- 97 forward
    esc.write(80);
    
    delay(20);  
  }
  
  delay(500);
   

}
