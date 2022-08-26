int pinA=7;
int pinB=8;
int buttonPin=6;
int c=0;
int lastStateA;
int currentStateA;
int dt=100;

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
    }
   lastStateA=currentStateA; 
}
