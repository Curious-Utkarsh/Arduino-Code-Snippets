#include <TimerOne.h>
String LEDStatus="OFF";
int YellowLED=10;
int RedLED=9;
 
void setup() 
{
  // Initialize the digital pin as an output.
  // Pin 13 has an LED connected on most Arduino boards
  pinMode(YellowLED, OUTPUT);    
  pinMode(RedLED,OUTPUT);
  
  Timer1.initialize(100000); 
  Timer1.attachInterrupt( BlinkYellow ); 
  Serial.begin(9600);
}
 
void loop()
{
digitalWrite(RedLED, HIGH);
delay(1000);
digitalWrite(RedLED, LOW);
delay(1000);
}
 
void BlinkYellow()
{
if (LEDStatus=="ON"){
  digitalWrite(YellowLED,LOW);
  LEDStatus="OFF";
  return;
  }
if (LEDStatus=="OFF"){
  digitalWrite(YellowLED,HIGH);
  LEDStatus="ON";
  return;
}
}
