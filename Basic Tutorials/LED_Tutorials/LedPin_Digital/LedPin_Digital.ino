/*
 * First program
 */

const int ledPin = 13;

// run once at the beggining of the program
void setup()
{
  // initializing pins as outputs
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); 
}

// super loop
void loop()
{
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
  
}
