#include<Wire.h>

int c=0;

void setup()
{
  Serial.begin(115200);
  Wire.begin();
}
void loop()
{
  Wire.beginTransmission(8);
  Wire.write(c);
  Wire.endTransmission();

  c++;
}
