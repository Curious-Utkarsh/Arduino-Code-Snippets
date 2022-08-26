int dir1 = 7;
int pwm1 = 6;
int dt=10;
int pinA=5;
int pinB=4;
int c=0;
int pwm_val;
int lastStateA;
int currentStateA;

void setup() 
{
pinMode(pwm1,OUTPUT);
pinMode(dir1,OUTPUT);
pinMode(pinA,INPUT);
pinMode(pinB,INPUT);
Serial.begin(9600); 

lastStateA=digitalRead(pinA);
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

if(c>=1)
{
digitalWrite(dir1,LOW);
}
if(c<=-1)
{
  digitalWrite(dir1,HIGH);
}

//controls the speed of the motor
pwm_val=255;
for(int i=0;i<c;i++)
{
Serial.println(c);
analogWrite(pwm1,pwm_val);
delay(dt);
analogWrite(pwm1,pwm_val);
delay(dt);
}
    }
   lastStateA=currentStateA; 
}
