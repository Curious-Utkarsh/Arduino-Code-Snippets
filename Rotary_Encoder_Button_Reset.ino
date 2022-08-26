#include <LiquidCrystal.h>

const int rs=12, en=11, D4=5, D5=4, D6=3, D7=2;
LiquidCrystal lcd(rs, en, D4, D5, D6, D7);

int pinA=6;
int pinB=7;
int buttonPin=8;
int c=0;
int flag=0;
int lastStateA;
int currentStateA;
int btnState;
int dt=0;

void setup()
{
  pinMode(pinA,INPUT);
  pinMode(pinB,INPUT);
  pinMode(buttonPin,INPUT);
  Serial.begin(9600);
  lcd.begin(16,2);
  
  lastStateA=digitalRead(pinA); //for counting steps
}
void loop()
{
    currentStateA=digitalRead(pinA);
    if(lastStateA!=currentStateA) //count increses both in cw or acw rotation as it only counts steps....so if step changes coount increases.
    {
      //if last state not equal to current state...it means count has increased....now we have to check in which direction it has it has increased.
      if(digitalRead(pinB)!=currentStateA)
      {
      c++;
      }
      else
      {
        c--;
      }
      Serial.println(c);
      lcd.print(c);
    }
   lastStateA=currentStateA; 
   lcd.clear();

   
   btnState = digitalRead(buttonPin);
   //Serial.println(btnState);
if(btnState==1&&flag==0)
{
  flag=1;
}
if(btnState==0&&flag==1)
{
  Serial.println("PRESSED");
  flag=0;
  c=0;
}
}
