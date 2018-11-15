int Relay = 4; //pin for relay
int PIR = 7;   // pin for pir sensor
int value =0; 
void setup()
{
  pinMode(Relay,OUTPUT);
  pinMode(PIR,INPUT);
  Serial.begin(9600);
}
void loop()
{
 value = digitalRead(PIR);
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

