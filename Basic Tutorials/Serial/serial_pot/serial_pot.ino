int potPin = 0;

void setup()
{
  // Create Serial Object
  Serial.begin(9600);

  pinMode(potPin, INPUT);
}

void loop()
{
  int val = map(analogRead(potPin), 0, 1023, 0, 255);

  Serial.println(val);

  delay(50);
}

