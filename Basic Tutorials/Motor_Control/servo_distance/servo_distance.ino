// Include the Servo Library
#include <Servo.h>

// Create a Servo Object
Servo testServo;

int servoPin = 9;
int distPin = 0;

void setup()
{
  // Attach the servo object
  testServo.attach(servoPin);
}

void loop()
{
  int dist = analogRead(distPin);
  int pos = map(dist, 0, 1023, 0, 180);

  testServo.write(pos);
}

