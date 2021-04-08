void setup()
{
  // Create Serial Object
  Serial.begin(9600);
}

void loop()
{
  // Wait to receive input
  while (Serial.available() == 0);

  // Read the input
  int val = Serial.read() - '0';
  
  // Echo the input
  Serial.println(val);
}

