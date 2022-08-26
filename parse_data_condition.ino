
   void parse_data_condition()
 { 
  if (Serial2.available() > 0) 
  {
    // Serial.print("available");
    // Read the incoming bytes:
  datain= Serial2.readStringUntil('!');
  }
  parse_data(datain); 
 }
