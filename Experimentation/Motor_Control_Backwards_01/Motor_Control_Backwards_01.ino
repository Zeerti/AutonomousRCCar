#include <Servo.h>  // servo library


Servo servo1;  // servo control object


void setup()
{
  Serial.begin(9600);
  servo1.attach(9);
}


void loop()
{
  int position;
  int varDirection;

  
  
  //Serial.print(position);
  servo1.write(90);
  varDirection = servo1.read();
  delay(100);
  servo1.write(90);// Tell servo to go to 90 degrees
  Serial.println(varDirection);

  delay(1000);         // Pause to get it time to move

  servo1.write(90);   // Tell servo to go to 180 degrees
  varDirection = servo1.read();
  Serial.println(varDirection);
  delay(1000);         // Pause to get it time to move

  
  
  //servo1.write(90);     // Tell servo to go to 0 degrees

  //delay(1000);         // Pause to get it time to move
  
  // Change position at a slower speed:

  // To slow down the servo's motion, we'll use a for() loop
  // to give it a bunch of intermediate positions, with 20ms
  // delays between them. You can change the step size to make 
  // the servo slow down or speed up. Note that the servo can't
  // move faster than its full speed, and you won't be able
  // to update it any faster than every 20ms.

  // Tell servo to go to 180 degrees, stepping by two degrees

 ///////////////////////////////////////////////////////////
 ///////////////////////////////////////////////////////////
 
  for(position = 0; position < 180; position += 2)
  {
    servo1.write(position);  // Move to next position
    
    delay(20);               // Short pause to allow it to move
    varDirection = servo1.read();
    Serial.println(varDirection);
  }
  

  // Tell servo to go to 0 degrees, stepping by one degree

  for(position = 180; position >= 0; position -= 1)
  {                                
    servo1.write(position);  // Move to next position
    delay(20);               // Short pause to allow it to move
  }
  varDirection = servo1.read();

  
}

