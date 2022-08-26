void flyWheel_ON() // flywheel on when left digital button pressed once
{
  digitalWrite(dirPinA_fly,LOW);
  digitalWrite(dirPinB_fly,HIGH);
 
  analogWrite(pwmPinA_fly,155);
  analogWrite(pwmPinB_fly,155);

  //Serial.println("FlyWheel ON");
}

void conveyer_belt_ON()
{
  digitalWrite(dirPinA_belt,HIGH); 
  analogWrite(pwmPinA_belt,motorSpeed);

  Serial.println("Conveyer Belt ON");
}

void conveyer_belt_OFF()
{
  digitalWrite(dirPinA_belt,HIGH); 
  analogWrite(pwmPinA_belt,0);

  Serial.println("Conveyer Belt OFF");
}

void ball_shoot_preloaded()
{
  if(c_right==1 && c_left==1) //Right digital button on Joystick for ball shoot.
  {
      sensorRead = digitalRead(sensorPin);// display's  1 if nothing detected in range and 0 when object detected.
      //Serial.println(sensorRead);
      while(sensorRead == 1 && c_left==1)
    {
      conveyer_belt_ON();
      sensorRead = digitalRead(sensorPin);
      parse_data_condition();
      toggleSwitch_LEFT();
    }
    if(sensorRead == 0)
    {
      conveyer_belt_OFF();
      Serial.println("Ball Shot");
    }
  }
  c_right = 0;
}

void flyWheel_START_Condition()
{
    if(c_left == 1) //Left Digital button on Joystick to start flywheel before firing.
  {
    //flag_left = 1;
    flyWheel_ON();
    ball_shoot_preloaded();
  }
}

void flyWheel_OFF()
{
  analogWrite(pwmPinA_fly,0);
  analogWrite(pwmPinB_fly,0);

  Serial.println("FlyWheel OFF");
}

void toggleSwitch_LEFT() // flyWheel ON when c = 1 and flyWheel OFF when c = 2.
{
  if(LEFT==1&&flag_left==0)
{
  flag_left=1;
}
if(LEFT==0&&flag_left==1)
{
  flag_left=0;
  c_left++;
}
}

void toggleSwitch_RIGHT() 
{
  if(RIGHT==1&&flag_right==0)
{
  flag_right=1;
}
if(RIGHT==0&&flag_right==1)
{
  flag_right=0;
  c_right++;
}
}

void flyWheel_STOP_Condition()
{
  if(c_left == 2)
  {
    flyWheel_OFF();
    c_left=0;
  }
}
