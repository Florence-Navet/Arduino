// C++ code
//
//int POTENTIOMETRE = 0;
int analogPin = 0;
int value;
int ledPin = 9;
int ledPin2 = 3;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop()
{
  value = map(analogRead(analogPin), 0, 1023, 0, 255);
  analogWrite(ledPin, value);
  analogWrite(ledPin2, 255-value);
}