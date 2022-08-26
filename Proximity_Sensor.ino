//Black Wire of Sensor is DIGITAL_READ_PIN
//Blue Wire of Sensor is GROUND
//Brown Wire of Sensor is +5V

int sensorPin = 31;
int sensorRead;

void setup()
{
  pinMode(sensorPin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  sensorRead = digitalRead(sensorPin);
  Serial.println(sensorRead);
}
