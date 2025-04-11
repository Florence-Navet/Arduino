// C++ code
//
int pinRed1 = 3;
int pinBlue1 = 5;
int pinGreen1 = 6;
int pinRed2 = 9;
int pinBlue2 = 10;
int pinGreen2 = 11;
int analogPin = 0;
int value;
int redState = LOW;
int blueState = LOW;
int greenState = LOW;

void setup()
{
  pinMode(pinRed1, OUTPUT);
  pinMode(pinBlue1, OUTPUT);
  pinMode(pinGreen1, OUTPUT);
  pinMode(pinRed2, OUTPUT);
  pinMode(pinBlue2, OUTPUT);
  pinMode(pinGreen2, OUTPUT);
  
}

void loop()
{
  
  value = map(analogRead(analogPin), 0, 1023, 0, 255);
  
  if (value < 255 / 12 * 3 || value > 255 / 12 * 9)
  {
  	redState = HIGH;
  }
  else
  {
    redState = LOW;
  }
  
  if (value > 255 / 12 && value < 255 / 12 * 7)
  {
    greenState = HIGH;
  }
  else
  {
  	greenState = LOW;
  }
  
  if (value > 255 / 12 * 5 && value < 255 / 12 * 11)
  {
    blueState = HIGH;
  }
  else
  {
    blueState = LOW;
  }
  
 
  digitalWrite(pinRed1, redState);
  digitalWrite(pinGreen1, greenState);
  digitalWrite(pinBlue1, blueState);

  digitalWrite(pinRed2, redState);
  digitalWrite(pinGreen2, greenState);
  digitalWrite(pinBlue2, blueState);
 
}