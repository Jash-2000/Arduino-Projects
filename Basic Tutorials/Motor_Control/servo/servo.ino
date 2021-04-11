// TBD

int motorPin = 9;

void setup()
{
  pinMode(motorPin, OUTPUT);
}

void loop()
{
  // Accelerate motor 0->255
  for (int i=0; i<255; i++) {
    analogWrite(motorPin, i);
    delay(10);
  }
  
  // Hold at top speed
  delay(500);

  // Decrease motor 255->0
  for (int i=255; i>=0; i--) {
    analogWrite(motorPin, i);
    delay(10);
  }

  // Hold at zero
  delay(500);
}

