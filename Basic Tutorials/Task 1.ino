//Task 1 .

int trig=2;
int echo1=3;
int echo2=4;
int LDRpin=A0;

const int threshold=600;

int S0=5;
int S1=6;
int S2=7;
int S3=8;
int sensorpin=9;
int motorleft=10;
int motorright=11;

int sensor,red_freq,green_freq;
float duration1,duration2;



void setup() {
  
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo1,INPUT);
  pinMode(echo2,INPUT);
  pinMode(S0,OUTPUT);
  pinMode(S1,OUTPUT);
  pinMode(S2,OUTPUT);
  pinMode(S3,OUTPUT);
  pinMode(sensorpin,INPUT);
  pinMode(motorleft,OUTPUT);
  pinMode(motorright,OUTPUT);

  digitalWrite(S0,HIGH);      //frequency scaling set to 20%
  digitalWrite(S1,LOW);
  digitalWrite(motorleft,LOW);
  digitalWrite(motorright,LOW);
}


int check_distance()
{
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

  duration1=pulseIn(echo1,HIGH);
  duration2=pulseIn(echo2,HIGH);

  if(duration1>duration2)
    return 1;
  else
    return 2;
  
}


void turn_bot(int side)
{
  if(side==1)
    digitalWrite(motorright,HIGH);
    delay(5000);
    digitalWrite(motorright,LOW);
  else if(side==2)
    digitalWrite(motorleft,HIGH);
    delay(5000);
    digitalWrite(motorleft,LOW);
  
}

void loop() {

  digitalWrite(S2,HIGH);  //green frequency to be detected
  digitalWrite(S3,HIGH);

  green_freq=pulseIn(sensorpin,LOW);
  green_freq=map(green_freq,0,100,255,0);   //i've assumed min value to be 0 and max to be 100 and mapped them.


  digitalWrite(S2,LOW);  //red frequency to be detected
  digitalWrite(S3,LOW);

  red_freq=pulseIn(sensorpin,LOW);
  red_freq=map(red_freq,0,100,255,0);   //i've assumed min value to be 0 and max to be 100 and mapped them.

  light_intensity=analogRead(LDRpin);   // LDR is connected in potential divider way, and threshold value is assumed to be 600.

  if(light_intensity>threshold)
  {
      if(green_freq > red_freq)                         //1-->left    2---> right
      {
        sensor=check_distance();                //sensor will contain 1 or 2 i.e left or right whichever shows far obstacle.
        turn_bot(sensor);
      }



      else
      {
        sensor=check_distance();
        if(sensor==1)                                         //this will give which sensor has nearer obstacle.
          sensor=2;
        else if(sensor==2)
          sensor=1;

          turn_bot(sensor);
          
      }
  }
}
