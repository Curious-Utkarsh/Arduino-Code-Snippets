#include <Wire.h>

int numRecieved;

void setup()
{
  Serial.begin(115200);
  Wire.begin(8);
  Wire.onReceive(eventReceive);
}
void loop()
{
  Serial.print("numReceived : ");
  Serial.println(
}
