//Declaration of libs
//startup()
//loop()


int inPin = 9;
int val = 0;
int i = 0;

void setup()
{
  
  pinMode(inPin, INPUT);

  Serial.begin(9600);
}

void loop()
{
  val = digitalRead(inPin);
  //val = pulseIn(inPin, LOW);
  Serial.println(val);
  //digitalWrite(inPin, 100);
  
}

