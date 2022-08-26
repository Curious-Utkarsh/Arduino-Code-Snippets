int trigPin = 6;
int echoPin = 7;
int ping_Travel_Time;
int distance;

void setup()
{
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigPin,LOW);
  delayMicroseconds(10);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  delayMicroseconds(10);

  ping_Travel_Time = pulseIn(echoPin,HIGH);
  distance = ping_Travel_Time * 0.034 / 2; // Gives distance in Meters
  Serial.println(distance);

  //delay(25);
}
