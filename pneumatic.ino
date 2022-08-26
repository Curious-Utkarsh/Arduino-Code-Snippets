//Pneumatic

//To Open Both Pneumatic
void pneumatic_UP()
{
  digitalWrite(solenoidSwitch_1,HIGH);
  digitalWrite(solenoidSwitch_2,HIGH);
}
//To Close Both Pneumatic
void pneumatic_DOWN()
{
  digitalWrite(solenoidSwitch_1,LOW);
  digitalWrite(solenoidSwitch_2,LOW);
}
