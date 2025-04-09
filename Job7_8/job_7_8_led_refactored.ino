// C++ code
//
int animationSpeed = 0;

void setup()
{
  //pinMode(LED_BUILTIN, OUTPUT);
  //pinMode(12, OUTPUT);
  //pinMode(11, OUTPUT);
  //pinMode(10, OUTPUT);
  //pinMode(9, OUTPUT);
  //pinMode(8, OUTPUT);
  //pinMode(7, OUTPUT);
  //pinMode(6, OUTPUT);
  for (int i = 13; i > 5; i--)
  {
    pinMode(i, OUTPUT);
    (animationSpeed);
  }

  animationSpeed = 400;
}

void loop()
{
  for (int i = 13; i > 5; i--)
  {
    delay(animationSpeed);
    digitalWrite(i, HIGH);
    delay(animationSpeed);
    digitalWrite(i, LOW);
  }
}