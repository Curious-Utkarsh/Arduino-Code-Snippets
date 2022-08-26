//Connect to Arduino Uno

#include<SoftwareSerial.h>
SoftwareSerial master(2,3);
int n;
int sqr;
void setup()
{
  Serial.begin(9600);
  master.begin(38400);
}
void loop()
{
  Serial.println(master.read());
  Serial.println("Enter a no.");
  while(Serial.available()==0)
  {
  }Serial.println(master.read());
  n=Serial.parseInt();
  Serial.println(n);
  master.write(n);
  
 
  if(master.available()>0)
  {
  Serial.print("sqr is = ");
  
  }
}
