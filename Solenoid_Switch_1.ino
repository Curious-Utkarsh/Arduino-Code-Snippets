int solenoidSwitch=8;

void setup()
{
  pinMode(solenoidSwitch,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  while(Serial.available()==0)
  {
    
  }
  int n=Serial.parseInt();
  if(n==1)
  {
    digitalWrite(solenoidSwitch,HIGH);
    Serial.println("LOW");
  }
    if(n==0)
  {
    digitalWrite(solenoidSwitch,LOW);
    Serial.println("HIGH");
  }
}
