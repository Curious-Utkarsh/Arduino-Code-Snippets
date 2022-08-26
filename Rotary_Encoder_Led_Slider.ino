int pinA=8;
int pinB=7;
int buttonPin=6;
int c=0;
int lastStateA;
int currentStateA;
int dt=100;
int Led1=5;
int Led2=4;
int Led3=3;
int Led4=2;
int mod;

void setup()
{ 
  pinMode(pinA,INPUT);
  pinMode(pinB,INPUT);
  pinMode(buttonPin,INPUT);
  Serial.begin(9600);
  
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
      //mod=c%4;

      if(c==1)
      {
        Serial.println("LED_1 ON");
      }
      if(c==2)
      {
        Serial.println("LED_2 ON");
      }
       if(c==3)
      {
        Serial.println("LED_3 ON");
      }
       if(c==4)
      {
        Serial.println("LED_4 ON");
      }
      
      if(c==-4)
      {
        Serial.println("LED_1 ON");
      }
      if(mod==-3)
      {
        Serial.println("LED_2 ON");
      }
       if(mod==-2)
      {
        Serial.println("LED_3 ON");
      }
       if(mod==-1)
      {
        Serial.println("LED_4 ON");
      }
    }
   lastStateA=currentStateA; 
}
