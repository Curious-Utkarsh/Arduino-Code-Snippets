
void base_chassis_condition()
{
//Condition for Left Joystick

  if ((LX>=Buffer_negative && LX<=Buffer_positive) && (LY >= -128 && LY < 0)) // To Move BOT Forward
  {
    Speed_LeftJoystickLY = map(LY, LY_Buffer_Forward, -128, leftJoy_min_speed, leftJoy_max_speed);
    botForward_LJoy();
    Serial.println("Forward Left Joy");
  }
  else if ((LX>=Buffer_negative && LX<=Buffer_positive) && (LY > 0 && LY <= 127)) // To Move BOT Backward
  {
    Speed_LeftJoystickLY = map(LY, LY_Buffer_Backward, 127, leftJoy_min_speed, leftJoy_max_speed);
    botBackward_LJoy();
    Serial.println("Backward Left Joy");
  }
  else if ((LY>=Buffer_negative && LY<=Buffer_positive) && (LX > 0 && LX <= 127)) // To Move BOT Right
  {
    Speed_LeftJoystickLX = map(LX, LX_Buffer_Right, 127, leftJoy_min_speed, leftJoy_max_speed);
    botRight_LJoy();
    Serial.println("Right Left Joy");
  }
  else if ((LY>=Buffer_negative && LY<=Buffer_positive) && (LX >= -128 && LX < 0)) // To Move BOT Left
  {
    Speed_LeftJoystickLX = map(LX, LX_Buffer_Left, -128, leftJoy_min_speed, leftJoy_max_speed);
    botLeft_LJoy();
    Serial.println("Left Left Joy");
  }

  //Condition for Right Joystick

  else if ((RX>=Buffer_negative && RX<=Buffer_positive) && (RY >= -128 && RY < 0)) // To Move BOT Forward
  {
    Speed_RightJoystickRY = map(RY, RY_Buffer_Forward, -128, rightJoy_min_speed, rightJoy_max_speed);
    botForward_RJoy();
    Serial.println("Forward Right Joy");
  }
  else if ((RX>=Buffer_negative && RX<=Buffer_positive) && (RY > 0 && RY <= 127)) // To Move BOT Backward
  {
    Speed_RightJoystickRY = map(RY, RY_Buffer_Backward, 127, rightJoy_min_speed, rightJoy_max_speed);
    botBackward_RJoy();
    Serial.println("Backward Right Joy");
  }
  else if ((RY>=Buffer_negative && RY<=Buffer_positive) && (RX > 0 && RX <= 127)) // To Move BOT Right
  {
    Speed_RightJoystickRX = map(RX, RX_Buffer_Right, 127, rightJoy_min_speed, rightJoy_max_speed);
    botRight_RJoy();
    Serial.println("Right Right Joy");
  }
  else if ((RY>=Buffer_negative && RY<=Buffer_positive) && (RX >= -128 && RX < 0)) // To Move BOT Left
  {
    Speed_RightJoystickRX = map(RX, RX_Buffer_Left, -128, rightJoy_min_speed, rightJoy_max_speed);
    botLeft_RJoy();
    Serial.println("Left Right Joy");
  }
  
  //Condition to Stop BOT

   else
   // To Stop BOT
  {
    botStop();
    //Serial.println("Stop");
  }

  //Condition to move BOT CW

    if (R2 > 0 && R2 <= 255) // To Move BOT CW
  {
    Speed_CW_R2 = map(R2, 0, 255, R2_CW_min_speed, R2_CW_max_speed);
    botCW();
    Serial.println("ClockWise");
  }

  //Condition to move BOT ACW

    if (L2 > 0 && L2 <= 255) // To Move BOT ACW
  {
    Speed_ACW_L2 = map(L2, 0, 255, L2_ACW_min_speed, L2_ACW_max_speed);
    botACW();
    Serial.println("AntiClockWise");
    //Serial.println(Speed_ACW_L2);
  }
}
