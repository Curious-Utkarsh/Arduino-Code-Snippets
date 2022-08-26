// Conveyer Belt

void conveyerBelt_Forward()
{
  digitalWrite(dirPinA_belt,HIGH); 
  analogWrite(pwmPinA_belt,motorSpeed); 
}

void conveyerBelt_Backward()
{
  digitalWrite(dirPinA_belt,LOW); 
  analogWrite(pwmPinA_belt,motorSpeed); 
}
