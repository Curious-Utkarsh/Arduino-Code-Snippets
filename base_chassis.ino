//Base Chassis

// Left Joystick 0-100

void botForward_LJoy()
{
  digitalWrite(dir1A, HIGH);
  analogWrite(pwm1A, Speed_LeftJoystickLY);

  digitalWrite(dir2A, HIGH);
  analogWrite(pwm2A, Speed_LeftJoystickLY);

  digitalWrite(dir1B, HIGH);
  analogWrite(pwm1B, Speed_LeftJoystickLY);

  digitalWrite(dir2B, HIGH);
  analogWrite(pwm2B, Speed_LeftJoystickLY);
}

void botBackward_LJoy()
{
  digitalWrite(dir1A, LOW);
  analogWrite(pwm1A, Speed_LeftJoystickLY);

  digitalWrite(dir2A, LOW);
  analogWrite(pwm2A, Speed_LeftJoystickLY);

  digitalWrite(dir1B, LOW);
  analogWrite(pwm1B, Speed_LeftJoystickLY);

  digitalWrite(dir2B, LOW);
  analogWrite(pwm2B, Speed_LeftJoystickLY);
}

void botLeft_LJoy()
{
  digitalWrite(dir1A, LOW);
  analogWrite(pwm1A, Speed_LeftJoystickLX);

  digitalWrite(dir2A, HIGH);
  analogWrite(pwm2A, Speed_LeftJoystickLX);

  digitalWrite(dir1B, HIGH);
  analogWrite(pwm1B, Speed_LeftJoystickLX);

  digitalWrite(dir2B, LOW);
  analogWrite(pwm2B, Speed_LeftJoystickLX);
}

void botRight_LJoy()
{
  digitalWrite(dir1A, HIGH);
  analogWrite(pwm1A, Speed_LeftJoystickLX);

  digitalWrite(dir2A, LOW);
  analogWrite(pwm2A, Speed_LeftJoystickLX);

  digitalWrite(dir1B, LOW);
  analogWrite(pwm1B, Speed_LeftJoystickLX);

  digitalWrite(dir2B, HIGH);
  analogWrite(pwm2B, Speed_LeftJoystickLX);
}

//Right Joystick 0-50

void botForward_RJoy()
{
  digitalWrite(dir1A, HIGH);
  analogWrite(pwm1A, Speed_RightJoystickRY);

  digitalWrite(dir2A, HIGH);
  analogWrite(pwm2A, Speed_RightJoystickRY);

  digitalWrite(dir1B, HIGH);
  analogWrite(pwm1B, Speed_RightJoystickRY);

  digitalWrite(dir2B, HIGH);
  analogWrite(pwm2B, Speed_RightJoystickRY);
}

void botBackward_RJoy()
{
  digitalWrite(dir1A, LOW);
  analogWrite(pwm1A, Speed_RightJoystickRY);

  digitalWrite(dir2A, LOW);
  analogWrite(pwm2A, Speed_RightJoystickRY);

  digitalWrite(dir1B, LOW);
  analogWrite(pwm1B, Speed_RightJoystickRY);

  digitalWrite(dir2B, LOW);
  analogWrite(pwm2B, Speed_RightJoystickRY);
}

void botLeft_RJoy()
{
  digitalWrite(dir1A, LOW);
  analogWrite(pwm1A, Speed_RightJoystickRX);

  digitalWrite(dir2A, HIGH);
  analogWrite(pwm2A, Speed_RightJoystickRX);

  digitalWrite(dir1B, HIGH);
  analogWrite(pwm1B, Speed_RightJoystickRX);

  digitalWrite(dir2B, LOW);
  analogWrite(pwm2B, Speed_RightJoystickRX);
}

void botRight_RJoy()
{
  digitalWrite(dir1A, HIGH);
  analogWrite(pwm1A, Speed_RightJoystickRX);

  digitalWrite(dir2A, LOW);
  analogWrite(pwm2A, Speed_RightJoystickRX);

  digitalWrite(dir1B, LOW);
  analogWrite(pwm1B, Speed_RightJoystickRX);

  digitalWrite(dir2B, HIGH);
  analogWrite(pwm2B, Speed_RightJoystickRX);
}

//R2 button for CW

void botCW()
{
  digitalWrite(dir1A, HIGH);
  analogWrite(pwm1A, Speed_CW_R2);

  digitalWrite(dir2A, LOW);
  analogWrite(pwm2A, Speed_CW_R2);

  digitalWrite(dir1B, HIGH);
  analogWrite(pwm1B, Speed_CW_R2);

  digitalWrite(dir2B, LOW);
  analogWrite(pwm2B, Speed_CW_R2);
}

// L2 button for ACW

void botACW()
{
  digitalWrite(dir1A, LOW);
  analogWrite(pwm1A, Speed_ACW_L2);

  digitalWrite(dir2A, HIGH);
  analogWrite(pwm2A, Speed_ACW_L2);

  digitalWrite(dir1B, LOW);
  analogWrite(pwm1B, Speed_ACW_L2);

  digitalWrite(dir2B, HIGH);
  analogWrite(pwm2B, Speed_ACW_L2);
}

// No Button use to stop BOT

void botStop()
{
  digitalWrite(dir1A, LOW);
  analogWrite(pwm1A, botStop_speed);

  digitalWrite(dir2A, LOW);
  analogWrite(pwm2A, botStop_speed);

  digitalWrite(dir1B, LOW);
  analogWrite(pwm1B, botStop_speed);

  digitalWrite(dir2B, LOW);
  analogWrite(pwm2B, botStop_speed);
}
