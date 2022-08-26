
void stepper_acctuator_condition()
{
// Condition For Stepper Acctuator
   
  if(Cross<30 && (Triangle>=40 && Triangle<=255))
  {
    stepperAcctuator_UP(); // Triangle Button on PS3
    Serial.println("Acctuator UP");
  }
  if(Triangle<30 && (Cross>=40 && Cross<=255))
  {
    stepperAcctuator_DOWN(); // Cross Button on PS3
    Serial.println("Acctuator DOWN");
  }
}
