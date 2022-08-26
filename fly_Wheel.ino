// flyWheel

void flyWheel_Fast_L1()
{
  motorSpeed_L1 = map(L1, 0, 255, 0, 155);
  
  digitalWrite(dirPinA_fly,LOW);
  digitalWrite(dirPinB_fly,HIGH);
 
  analogWrite(pwmPinA_fly,motorSpeed_L1);
  analogWrite(pwmPinB_fly,motorSpeed_L1);   
}

void flyWheel_Slow_R1()
{
  motorSpeed_R1 = map(R1, 0, 255, 0, 100);
  
  digitalWrite(dirPinA_fly,LOW);
  digitalWrite(dirPinB_fly,HIGH);
 
  analogWrite(pwmPinA_fly,motorSpeed_R1);
  analogWrite(pwmPinB_fly,motorSpeed_R1);   
}
