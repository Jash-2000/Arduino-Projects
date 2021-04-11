// Final Project

const int sensorPin = A0;       // Analog Input Pin
const int motorPin = 3;           // Output Pin


void setup() 
{
  
  Serial.begin(9600);       // Setting the baud rate.  
  pinMode(3, OUTPUT);
}

void loop() {
	
  int sensorValue = 0;
  
  sensorValue = analogRead(A0);
  
  if (sensorValue < 300) 
  { // To change the point at which the light turns on change this value.
    digitalWrite(motorPin,HIGH);
  }
  else 
  {
    digitalWrite(motorPin,LOW);
  }
  
  Serial.println(sensorValue);
}
