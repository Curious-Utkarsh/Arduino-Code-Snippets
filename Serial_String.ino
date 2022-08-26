int ledPin=9;
String blinkk;
int d=1000;
String msg="Enter LED Blink YES or NO";

void setup()
{
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println(msg);
  while(Serial.available()==0)
  {
  
  }
  
  blinkk=Serial.readString();
  Serial.print("Your Answer is = ");
  Serial.println(blinkk);
  delay(500);

if(blinkk=="YES")
  {
    digitalWrite(ledPin,HIGH);
  }
  if(blinkk=="NO")
  {
    digitalWrite(ledPin,LOW);
  }
}
  
