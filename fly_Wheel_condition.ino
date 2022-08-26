
void fly_wheel_condition()
{
//Condition for FlyWheel

   if(L1>0 && L1<=255)
  {
    flyWheel_Fast_L1(); // To Run FlyWheel Fast 0-155
    Serial.println("FlyWheel Fast"); 
  }
  if(R1>0 && R1<=255)
  {
    flyWheel_Slow_R1(); // To Run FlyWheel Slow 0-100
    Serial.println("FlyWheel Slow");
  }
}
