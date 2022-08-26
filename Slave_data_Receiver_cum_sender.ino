#include<Wire.h>

int dt=100;
int x,y;

void setup()
{
  Serial.begin(9600);
  Wire.begin(8);
  Wire.onReceive(requestEvent);
  Wire.onRequest(requestData);
}

void loop()
{
  delay(dt);
}

void requestEvent(int howMany)
{
  while(Wire.available())
  {
  Serial.println(Wire.available());
  x = Wire.read();
  y = Wire.read();

  Serial.println("NOs. Received are :");
  Serial.println(x);
  Serial.println(y);
  }
}

void requestData()
{
  int sum=x+y;
  Wire.write(sum);
}
