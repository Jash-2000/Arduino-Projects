
/*
Create an intruder alarm with a photoresistor, as many LEDs as you like, one buzzer, and a button. The
board must behave as follows:
1. When the photoresistor sees light, the LED(s) flash, and the buzzer produces a custom sound
(any song you want)
2. When the button is pushed, the board resets, Lights and buzzer turn off and the alarm
becomes active again.
3. When there is no light, LED(s) and the buzzer are off.
4. Repeat!
*/

const int sensorPin = A0;       // Analog Input Pin
const int ledPin = 3;           // PWM Analog Output Pin
const int buzzerPin = 9;        // Output Pin
const int Button = 4;
int lightLevel = 0;
int Alarm_state = 0;

int manualTune(int, int, int);
void ResetAlarm();
void Alarm();

// To get the Max and Min Analog Values of the Photoresistor. 
/*
void setup(){
  Serial.begin(9600); //9600 bits per second
}

void loop(){
  lightLevel = analogRead(sensorPin);
  Serial.print("lighLevel ="); //print at the same line
  Serial.println(lightLevel); // make a new line
}
*/

void setup() {
  Serial.begin(9600);       // Setting the baud rate.  
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  analogWrite(ledPin, 0);
  pinMode(Button, INPUT_PULLUP); 
}

void loop() {

  int Max = 679;
  int Min = 6;
  lightLevel = analogRead(sensorPin);
  if(lightLevel >= (Max-Min)/2){ Alarm_state = 1;}
  lightLevel = manualTune(Max, Min, lightLevel);
  
  if(Alarm_state == 1){
    Alarm(lightLevel);
    }
    
    if(digitalRead(Button) == HIGH){ResetAlarm();}         // Change here.
}

int manualTune(int max, int min, int level){ //change the 0, 1023 in the line below!
  level = map(level, min, max, 0, 255);
  level = constrain(level, 0, 255);
  return(level);
}

void Alarm(int lightLevel){
  analogWrite(ledPin, lightLevel);        // This will flash the Led  
  tone(buzzerPin, 1000);
}

void ResetAlarm(){
  Alarm_state = 0;
  noTone(buzzerPin);
}
