int stepPin = 5;
int dirPin = 6;
int enblPin = 7;

void setup() 
{
pinMode (stepPin, OUTPUT);
pinMode (dirPin, OUTPUT);
pinMode (enblPin, OUTPUT);
digitalWrite(stepPin, LOW);
digitalWrite(dirPin, LOW);
digitalWrite(enblPin, HIGH);
}

void loop() 
{
for(int x=0; x<1600; x++)
{
digitalWrite(stepPin, HIGH);
delayMicroseconds(100);
digitalWrite(stepPin, LOW);
delayMicroseconds(100);
}
digitalWrite(enblPin, LOW);
//exit(0);
}
