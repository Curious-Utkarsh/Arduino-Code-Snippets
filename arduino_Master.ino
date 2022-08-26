#define SMS 6
#define LED 13

void setup() {
pinMode(SMS, OUTPUT);
pinMode (LED, OUTPUT);
}

void loop() {
digitalWrite(SMS, HIGH);
digitalWrite(LED,HIGH);
delay(2000);
digitalWrite(SMS, LOW);
digitalWrite(LED, LOW);
delay(200);
}
