int sensePin = 0;
int ledPin = 9;

void setup()
{
  analogReference(DEFAULT); // no es necesario
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  int val = analogRead(sensePin);
  
  if (val < 500)
    digitalWrite(ledPin,HIGH);
  else
    digitalWrite(ledPin,LOW);
}
