//Connect to Arduino Mega

int num_recieved;
int sqr;
//SoftwareSerial slave(2,3);

void setup()
{
  Serial.begin(9600);
  Serial2.begin(38400);
  
}

void loop()
{
  Serial2.println(8);
  Serial.println(Serial2.write(8));
  if(Serial2.available()>0)
  {
    num_recieved=Serial2.read();
  Serial.println(num_recieved);
  sqr=num_recieved*num_recieved;
    Serial2.write(sqr);
    Serial.print("SQR is : ");
    Serial.println(sqr);
  }
}
