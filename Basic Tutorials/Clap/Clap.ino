int soundSensor=2;
int LED=4;
boolean LEDStatus=false;

void setup() {
 pinMode(soundSensor,INPUT);
 Serial.begin(9600);
 pinMode(LED,OUTPUT);

}

void loop() {

  int SensorData=digitalRead(soundSensor); 
  if(SensorData==1){

    if(LEDStatus==false){
        LEDStatus=true;
        digitalWrite(LED,HIGH);
    }
    else{
        LEDStatus=false;
        digitalWrite(LED,LOW);
    }
  }
 }             
