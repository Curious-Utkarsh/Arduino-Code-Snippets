
void pneumatic_condition()
{
  //int n;
  if(UP==1)
  { 
   pneumatic_UP(); 
   Serial.println("Pneumatic UP");
  }
  if(DOWN==1)
  {
   pneumatic_DOWN();
   Serial.println("Pneumatic DOWN"); 
  }
}
