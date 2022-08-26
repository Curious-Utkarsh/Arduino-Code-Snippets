volatile long counter=0;
volatile long store;


void setup()
{
  Serial.begin(9600);
  pinMode(2,INPUT_PULLUP);
  pinMode(3,INPUT_PULLUP);
  //attachInterrupt(digitalPinToInterrupt(2), pin2 ,LOW);
  attachInterrupt(digitalPinToInterrupt(3), pin3 ,LOW);
}

void loop()
{
  if(counter!=store)
  {
    //Serial.println(counter);
    //store=counter;
  }
}

void pin2()
{
Serial.print("pin3 ");
Serial.println(digitalRead(3));
}
void pin3()
{
Serial.print("pin2 ");
Serial.println(digitalRead(2));
}
