int Timer;
int pwm1=4;
int dir1=5;
int pinA=8;
int pinB=7;
int lastStateA;
int currentStateA;
int c=0;
int gainFactor;
int lastCount=0;
int currentCount;

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
  if(currentStateA!=lastStateA)
  {
    if(digitalRead(pinB)==currentStateA)
    {
      c--;
    }
    else
    {
      c++;
    }
    //Serial.println(c); 
    int absolute_val_c=abs(c);
    Serial.println(absolute_val_c);
     gainFactor=(c*8.5);
    
    currentCount=c;
    if(currentCount>lastCount)
    {
      digitalWrite(dir1,HIGH);
      analogWrite(pwm1,gainFactor); 
    }
    if(currentCount<lastCount)
    {
      digitalWrite(dir1,LOW);
      analogWrite(pwm1,gainFactor);
    }
    if(Timer>=2)
    {
      analogWrite(pwm1,0);
    }
  }
  lastStateA=currentStateA;
  lastCount=currentCount;
  if(c==30 || c==-30)
  {
    c=0;
  }
}

    

    
    
    

     
  
