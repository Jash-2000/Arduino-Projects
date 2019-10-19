
/*
 The LCD circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

 */

#include <LiquidCrystal.h>
#include<math.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int Lux,t_Lux;
float temp,t_temp;
int tempPin = A0;
int LDRPin = A1;
int buzzer = 9;
int LED = 13;

void setup()
{
   Serial.begin(9600);
   lcd.begin(16,2);
   pinMode(LED , OUTPUT);
   pinMode(buzzer,OUTPUT);
}

void loop() {
  Serial.print("Enter the value of threshold temperature(in *c) : ");
  while(Serial.available()){
  t_temp = Serial.read();
  Serial.println(t_temp);
  delay(5000);
  }
  
  
  Serial.print("Enter the value of threshold Lux : ");
  while(Serial.available()){
  t_Lux = Serial.read();
  Serial.println(t_Lux);
  delay(5000);
  }
  

   
   temp = analogRead(tempPin);
   temp = temp * 0.0048828125;             // convert the analog volt to its temperature equivalent
   Serial.print("TEMPERATURE = ");
   Serial.print(temp);                    // display temperature value
   Serial.print("*C");
   Serial.println();

  Lux = Light(analogRead(A1));
  Serial.print("Light Intensity:");
  Serial.print(Lux);
  Serial.println(" Lux");

  

  if(Lux >= t_Lux && temp>= t_temp)
  {
        Serial.println("The threshold has been crossed starting the secondare circuit ...");
        Blinker(Lux,temp);
  }
  
  else
  Serial.println("Threshold not crossed !! Restarting........");
  
  
  if (Serial.available()){
    delay(100);
    lcd.clear();    // clear the screen
    while (Serial.available() > 0)
     lcd.write(Serial.read());
  }

  Serial.print("Now Restarting the circuit : ");
  delay(5000);                         // update sensors reading each five second
}

int Light (int RawData)
{
  double Vout = RawData*0.0048828125; // We consider the LDR connected from Gnd to A1 pin.
  /* Lux*(R^1.4) = constant (according to luxometer datasheet). And we consider relative lux */
  int lux = pow((5 - Vout/2/Vout),1.4) ;  // Using 20 k ohm resistor . 
  return lux;
}


void Blinker(int Lux , float temp)
{
  tone(buzzer,1500);
  for(int i=0;i<6;i++)
  { 
    digitalWrite(LED, HIGH);
    delay(1000);
    digitalWrite(LED, LOW);
    delay(1000);
  }
  noTone(buzzer);
}
