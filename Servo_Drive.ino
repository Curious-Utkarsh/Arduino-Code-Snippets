#include <Servo.h>

int servoPin=9;
int servoPos;
Servo myservo;

int potPin=A0;
int potVal;
int dt=200;

void setup()
{
  Serial.begin(9600);
  pinMode(servoPin,OUTPUT);
  myservo.attach(servoPin);
  myservo.write(0);
  pinMode(potPin,INPUT);
  digitalWrite(4,HIGH);
}

void loop()
{
digitalWrite(4,HIGH);
potVal=analogRead(potPin);
servoPos=((180./1023.)*potVal);
Serial.println(servoPos);
myservo.write(servoPos);
delay(dt);
}
