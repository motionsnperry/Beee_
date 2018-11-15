int RELAY= 4;
int PIR = 7;
int value = 0;
void setup()
{
pinMode(RELAY,OUTPUT);
pinModed(PIR,INPUT);
Serial.begin(9600);
}
void loop()
{
value  = digitalRead(PIR);
Serial.begin(value);
if(value==HIGH)
{
digitalWrite(RELAY,HIGH);
}
else
{
digitalWrite(RELAY,LOW);
}
}
