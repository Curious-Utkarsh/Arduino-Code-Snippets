int ledPin1=4;
int ledPin2=5;
int ledPin3=6;
int ledPin4=7;
int Choice;
int Flag;
int dt=100;

void setup()
{
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);
  pinMode(ledPin3,OUTPUT);
  pinMode(ledPin4,OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  Serial.println("For Right Transition : 1");
  Serial.println("For Left Transition  : 2");
  Serial.println("For All ON           : 3");
  Serial.println("For All OFF          : 4");
  Serial.println("To STOP LOOP         : 5");
  Serial.println("Enter your CHOICE");

  while(Serial.available()==0)
  {
    
  }

  Choice=Serial.parseInt();

  Serial.print("Your Choice is : ");
  Serial.println(Choice);

  while(Choice==1)
  {
    Flag=Serial.parseInt();
    if(Flag==5)
    {
      Serial.print("Your Choice is : ");
      Serial.println(Flag);
      Flag=0;
      break;
    }
    digitalWrite(ledPin1,HIGH);
    delay(dt);
    digitalWrite(ledPin1,LOW);
    delay(dt);
    
    digitalWrite(ledPin2,HIGH);
    delay(dt);
    digitalWrite(ledPin2,LOW);
    delay(dt);

    digitalWrite(ledPin3,HIGH);
    delay(dt);
    digitalWrite(ledPin3,LOW);
    delay(dt);

    digitalWrite(ledPin4,HIGH);
    delay(dt);
    digitalWrite(ledPin4,LOW);
    delay(dt);
    }
    
    while(Choice==2)
  {
    Flag=Serial.parseInt();
    if(Flag==5)
    {
      Serial.print("Your Choice is : ");
      Serial.println(Flag);
      Flag=0;
      break;
    }
    digitalWrite(ledPin4,HIGH);
    delay(dt);
    digitalWrite(ledPin4,LOW);
    delay(dt);
    
    digitalWrite(ledPin3,HIGH);
    delay(dt);
    digitalWrite(ledPin3,LOW);
    delay(dt);

    digitalWrite(ledPin2,HIGH);
    delay(dt);
    digitalWrite(ledPin2,LOW);
    delay(dt);

    digitalWrite(ledPin1,HIGH);
    delay(dt);
    digitalWrite(ledPin1,LOW);
    delay(dt);
  }

    if(Choice==3)
  {
    digitalWrite(ledPin1,HIGH);   
    digitalWrite(ledPin2,HIGH);
    digitalWrite(ledPin3,HIGH);
    digitalWrite(ledPin4,HIGH);
  }

      if(Choice==4)
  {
    digitalWrite(ledPin1,LOW);   
    digitalWrite(ledPin2,LOW);
    digitalWrite(ledPin3,LOW);
    digitalWrite(ledPin4,LOW);
  }
}
  
   
