#include <IRremote.h>

#define IR_RECEIVE_PIN   0 
#define L1               1
#define L2               2
#define L3               3
#define F1               4
             
bool l1 = false;   
bool l2 = false; 
bool l3 = false; 
bool f1 = false; 
            
void setup()
{
  //Serial.begin(115200);
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(F1, OUTPUT);
  IrReceiver.begin(IR_RECEIVE_PIN);
}
unsigned long last = millis();

void loop() 
{
  if (IrReceiver.decode()) 
  {
    if (millis() - last > 250) 
    {
      if(String(IrReceiver.decodedIRData.decodedRawData,HEX) == "fa059b88") //red L1
      {
        if(l1 == false)
        {
          l1 = true;
          digitalWrite(L1, HIGH);
        }
        else
        {
          l1 = false;
          digitalWrite(L1, LOW);
        }
      }

      if(String(IrReceiver.decodedIRData.decodedRawData,HEX) == "fb049b88") //green L2
      {
        if(l2 == false)
        {
          l2 = true;
          digitalWrite(L2, HIGH);
        }
        else
        {
          l2 = false;
          digitalWrite(L2, LOW);
        }
      }

      if(String(IrReceiver.decodedIRData.decodedRawData,HEX) == "fd029b88") //yellow L3
      {
        if(l3 == false)
        {
          l3 = true;
          digitalWrite(L3, HIGH);
        }
        else
        {
          l3 = false;
          digitalWrite(L3, LOW);
        }
      }

      if(String(IrReceiver.decodedIRData.decodedRawData,HEX) == "e11e9b88") //blue F1
      {
        if(f1 == false)
        {
          f1 = true;
          digitalWrite(F1, HIGH);
        }
        else
        {
          f1 = false;
          digitalWrite(F1, LOW);
        }
      }
      //Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX);
    }
    last = millis();
    IrReceiver.resume();
  }
}
