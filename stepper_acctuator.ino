// Stepper Acctuator

//To Open Stepper Acctuator

void stepperAcctuator_UP()
{
  digitalWrite(dirA,HIGH);
  digitalWrite(dirB,HIGH);

  while(Triangle==0 && Cross==1)
  {
    digitalWrite(pulsePinA,HIGH);
    digitalWrite(pulsePinB,HIGH);
    delayMicroseconds(100);

    digitalWrite(pulsePinA,LOW);
    digitalWrite(pulsePinB,LOW);
    delayMicroseconds(100);
  }
}

//To Close Stepper Acctuator

void stepperAcctuator_DOWN()
{
  digitalWrite(dirA,LOW);
  digitalWrite(dirB,LOW);

  while(Triangle==1 && Cross==0)
  {
    digitalWrite(pulsePinA,HIGH);
    digitalWrite(pulsePinB,HIGH);
    delayMicroseconds(100);

    digitalWrite(pulsePinA,LOW);
    digitalWrite(pulsePinB,LOW);
    delayMicroseconds(100);
  }
}
