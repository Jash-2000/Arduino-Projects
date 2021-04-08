/*
SF-3 Challenge: Create a night light

Turn off the LED when there is light
Turn on the LED when it is dark

*/

const int sensorPin = A0;       // Analog Input Pin
const int ledPin = 3;           // Output Pin

int sensorValue = 0;

void setup() {
  
  Serial.begin(9600);       // Setting the baud rate.  
  pinMode(3, OUTPUT);
}

void loop() {

  sensorValue = analogRead(A0);
  if (sensorValue < 200) { // To change the point at which the light turns on change this value.
    digitalWrite(3, HIGH);
  }
  else {
    digitalWrite(3,LOW);}
}
