int buttonPin=9;
int ledState=0;
int buttonState;
int buttonRead;

void setup();
{
  Serial.begin(9600);
  pinMode(buttonPin,INPUT);
}
void loop()
{
  buttonRead=digitalRead(buttonPin);
  buttonStateNew=buttonRead;

  if(buttonStateOld==0 && buttonStateNew==1)
  {
    Serial.println("LED ON");
    ledState=buttonStateNew;
    buttonStateOld=buttonStateNew;
  }
  if(buttonStateOld==1 && buttonStateNew==1)




















   
