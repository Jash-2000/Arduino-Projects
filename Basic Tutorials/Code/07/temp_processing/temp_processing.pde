import processing.serial.*;
Serial port;

// Variables
String temp_c = "";
String temp_f = "";
String data = "";
int index = 0;
PFont font;

void setup()
{
  size(400, 400);
  port = new Serial(this, "/dev/ttyUSB0", 9600);
  port.bufferUntil('.');
  font = loadFont("AgencyFB-Bold-200.vlw");
  textFont(font, 200);
}

void draw()
{
  background(0, 0, 0);
  fill(46, 209, 2);
  text(temp_c, 70, 175);
  fill(0, 102, 153);
  text(temp_f, 70, 370);
}

void serialEvent(Serial port)
{
  data = port.readStringUntil('.');
  data = data.substring(0, data.length() - 1);
  
  // look for comma
  index = data.indexOf(",");
  // fetch celcius
  temp_c = data.substring(0, index);
  // fetch farenheith
  temp_f = data.substring(index+1, data.length());
}