int sensorPin0 = 0;
//int sensorPin1 = 1;

void setup() 
{
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() 
{
  int val0 = analogRead(sensorPin0);
  //int val1 = analogRead(sensorPin1);
  Serial.println(val0);
  delay(100);
  // put your main code here, to run repeatedly:

}
