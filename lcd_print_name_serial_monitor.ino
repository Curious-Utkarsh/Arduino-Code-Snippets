#include <LiquidCrystal.h>

const int rs=12, en=11, D4=5, D5=4, D6=3, D7=2;
LiquidCrystal lcd(rs, en, D4, D5, D6, D7);

String NAME;

void setup()
{
  lcd.begin(16,2);
  Serial.begin(9600);
  lcd.print("ENTER NAME");
}

void loop()
{
  while(Serial.available()==0)
{
}
  NAME=Serial.readString();
  int x=NAME.lenght();

  if(x<=16)
  {
  lcd.clear();
  lcd.print(NAME);
  }
  if(x>16)
  {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(NAME);    
  }































  
