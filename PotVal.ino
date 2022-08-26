int potPin=A0;
int ledPin=11;
int potVal;
int dt=0;
int Brightness;

void setup()
{
  pinMode(potPin,INPUT);
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  potVal=analogRead(potPin);
  Brightness=((255./1023.)*potVal);
  Serial.println(Brightness);
  analogWrite(ledPin,Brightness);
  delay(dt);
}
