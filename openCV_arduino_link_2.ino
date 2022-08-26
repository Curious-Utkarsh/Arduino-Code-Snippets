String cmd;
String str="";

void setup()
{
  Serial.begin(115200); 
}

void loop()
{
   while(Serial.available()>0)
   {}
   cmd=Serial.readStringUntil('\r');
   str=("Recieved : " + cmd);
   Serial.println(str);
}
