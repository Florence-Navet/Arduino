// C++ code
//
int animationSpeed = 0;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);

  animationSpeed = 400;
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(9, HIGH);
  delay(animationSpeed); // Wait for animationSpeed millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(11, LOW);
  digitalWrite(9, LOW);
  delay(animationSpeed); // Wait for animationSpeed millisecond(s)
}