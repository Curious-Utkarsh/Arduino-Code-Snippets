
void conveyer_belt_condition()
{
// Condition for Conveyer Belt

  if(Square<30 && (Circle>=40 && Circle<=255))
  {
    conveyerBelt_Forward(); // Circle Button to move Belt Forward
    Serial.println("Belt Forward");
  }
  if(Circle<30 && (Square>=40 && Square<=255))
  {
    conveyerBelt_Backward(); // Square Button to move Belt Backward
    Serial.println("Belt Backward");
  } 
}
