// Potentiometer

int sensePin = 0;

void setup()
{
  analogReference(DEFAULT); // not es necesario
  Serial.begin(9600);
}

void loop()
{
  Serial.println(analogRead(sensePin));
  delay(500);
}
