#include<LiquidCrystal.h>

const int rs=12, en=11, d4=5, d5=4, d6=3, d7=2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int Button=8;
int c=0;
int flag=0;
int dt=0;

void setup()
{
  lcd.begin(16,2);
  Serial.begin(9600);

  pinMode(Button, INPUT);

  lcd.write("No. of TIMES :");
}

void loop()
{
int state;
state=digitalRead(Button);
Serial.print(state);
Serial.print("   ");
Serial.println(c);


lcd.setCursor(0,1);
lcd.print(c);

if(state==1&&flag==0)
{
  flag=1;
}
if(state==0&&flag==1)
{
  flag=0;
  c++;
}
delay(dt);
}










































  
