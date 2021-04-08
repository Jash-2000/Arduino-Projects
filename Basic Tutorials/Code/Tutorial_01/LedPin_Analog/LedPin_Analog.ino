/*
 Analog LED blink
*/

const int ledPin = 11;
int level = 0;

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
 
  float voltage = 0.0;
  analogWrite(ledPin, level);
  delay(1000);
  level = level + 10;
  if( level >= 255 )
  {
  	level = 0;
  }
  Serial.print("LED output is : ");
  Serial.println(level);
  Serial.print("Voltage level is : ");
  voltage =(5.0/255.0)*level;
  Serial.println(voltage);
}
