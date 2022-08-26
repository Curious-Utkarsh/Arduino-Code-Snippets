#define LED 13
#define IN 8
int val = 0;
int dt=0;

void setup() 
{
  Serial.begin(9600);
  pinMode(IN, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() 
{
  val = digitalRead(IN);
  Serial.println(val);
  if (val == HIGH) {
    digitalWrite(LED, HIGH);
    Serial.println("HIGH");
  }
  else 
  {
    digitalWrite(LED, LOW);
  }
  delay(dt);
}
