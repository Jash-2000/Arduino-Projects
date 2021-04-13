const int PotPin = A0;       

const int RedPin = 6; 
const int BluePin =5 ; 
const int GreenPin = 3;        

const int BButton = 11;
const int RButton = 12;
const int GButton = 8;

bool redState = 0;
bool greenState = 0;
bool blueState = 0;

void setup()
{
	Serial.begin(9600);       // Setting the baud rate.  
  	
	pinMode(RedPin, OUTPUT);
    pinMode(BluePin, OUTPUT);
    pinMode(GreenPin, OUTPUT);
  
  	analogWrite(RedPin, 0);
  	analogWrite(BluePin, 0);
  	analogWrite(GreenPin, 0);
  	
    pinMode(BButton, INPUT_PULLUP); 
  	pinMode(GButton, INPUT_PULLUP);  
  	pinMode(RButton, INPUT_PULLUP); 
}

void loop()
{
  		
  	int voltageLevel = 0;
  	int lightLevel = 0;
  
  	voltageLevel = analogRead(PotPin);
  	lightLevel = manualTune(1023, 0, voltageLevel);
  	
  	if(digitalRead(BButton) == HIGH)
    {
     	blueState = BlueToggle(lightLevel, blueState);    
    	delay(1000);
    }
    
  	if(digitalRead(GButton) == HIGH)
    {
     	greenState = GreenToggle(lightLevel, greenState);  
    	delay(1000);
    }
    
  	if(digitalRead(RButton) == HIGH)
    {
      	redState = RedToggle(lightLevel, redState); 
      	delay(1000);
    }
  	
}
int manualTune(int max, int min, int level){ //change the 0, 1023 in the line below!
  level = map(level, min, max, 0, 255);
  level = constrain(level, 0, 255);
  return(level);
}

bool RedToggle(int redVal, bool currstate)
{
	if(currstate == 1)
    {
    	analogWrite(RedPin,0);
    	return(0);
    }
    else
    {
    	analogWrite(RedPin, redVal);
    	return(1);
    }
}

bool BlueToggle(int blueVal,bool currstate)
{
	if(currstate == 1)
    {
    	analogWrite(BluePin,0);
    	return(0);
    }
    else
    {
    	analogWrite(BluePin, blueVal);
    	return(1);
    }
}

bool GreenToggle(int greenVal, bool  currstate)
{
	if(currstate == 1)
    {
    	analogWrite(GreenPin,0);
    	return(0);
    }
    else
    {
    	analogWrite(GreenPin, greenVal);
    	return(1);
    }
}
