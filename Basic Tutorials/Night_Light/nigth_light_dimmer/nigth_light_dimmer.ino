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
  
  val = constrain(val, 350, 700);
  int ledLevel = map(val, 350, 700, 255, 0);
  
  analogWrite(ledPin,ledLevel);
}
