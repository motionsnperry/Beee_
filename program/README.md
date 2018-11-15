int Relay= 4;
int PIR = 7;
int value = 0;
void setup()
{
pinMode(Relay,OUTPUT);
pinModed(PIR,INPUT);
Serial.begin(9600);
}
void loop()
{
value  = digitalRead(PIR);
Serial.begin(value);
if(value==HIGH)
{
digitalWrite(Relay,HIGH);
}
else
{
digitalWrite(Relay,LOW);
}
}
