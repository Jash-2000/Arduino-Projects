// Generating Random Coloured Lights

const int RedPin = 9;
const int GreenPin = 5;
const int BluePin = 6;

const int RedCont = A0;
const int GreenCont = A2;
const int BlueCont = A1;

void setup()
{
  Serial.begin(9600);
  
  pinMode(RedPin, OUTPUT);
  pinMode(BluePin, OUTPUT);
  pinMode(GreenPin, OUTPUT);
  
  pinMode(RedCont, INPUT);
  pinMode(BlueCont, INPUT);
  pinMode(GreenCont, INPUT);
}

void loop()
{
  int Red = 0;
  int Green = 0;
  int Blue = 0;

  Red = analogRead(RedCont);
  Serial.print("Red Value is : ");
  Serial.println(Red);
  Blue = analogRead(BlueCont);
  Serial.print("Blue Value is : ");
  Serial.println(Blue);
  Green = analogRead(GreenCont);
  Serial.print("Green Value is : ");
  Serial.println(Green);
  
  Red = map(Red, 0, 1023, 0, 255);
  Green = map(Green, 0, 1023, 0, 255);
  Blue = map(Blue, 0, 1023, 0, 255);
  
  analogWrite(RedPin, Red);
  analogWrite(GreenPin, Green);
  analogWrite(BluePin, Blue);
}
