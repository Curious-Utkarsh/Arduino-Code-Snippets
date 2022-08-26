#include<Wire.h>

int num[2];
int dt=0;

void setup()
{
  Wire.begin();
  Serial.begin(9600);
}

void loop()
{
  for(int i=0;i<2;i++)
  {
  Serial.println("Enter Two Numbers");
  while(Serial.available()==0)
  {
  }
  num[i]=Serial.parseInt();
  }
  Serial.println("Two NOs. entered are ");
  Serial.println(num[0]);
  Serial.println(num[1]);

  Wire.beginTransmission(8);
  Wire.write(num[0]);
  Wire.write(num[1]);
  Wire.endTransmission();

  Serial.print("Transmission Status : ");
  Serial.println(Wire.endTransmission());

  delay(dt);
  
  Wire.requestFrom(8, 1);
  
  while(Wire.available())
  {
    int sum=Wire.read();
    Serial.print("Sum is : ");
    Serial.println(sum);
  }
}
