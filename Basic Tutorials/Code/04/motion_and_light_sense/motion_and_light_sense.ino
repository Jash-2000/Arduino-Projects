
// Define pins
int motionPin = 0;
int lightPin = 1;
int ledPin = 9;

// Distance Variables
int lastDist = 0;
int currentDist = 0;

// Threshold for Movement
int thresh = 200;

void setup()
{
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  int lightVal = analogRead(lightPin);
  currentDist = analogRead(motionPin);

  // Threshold variaton between loop steps
  if (((currentDist > lastDist + thresh) || (currentDist < lastDist - thresh)) && (lightVal < 500)) {
    digitalWrite(ledPin, HIGH);
    delay (1000);
  } else {
    digitalWrite(ledPin, LOW);
  }

}
