// C++ code
//
int animationspeed = 0;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, LOW);
  delay(1); // Wait for 1 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(animationspeed); // Wait for animationspeed millisecond(s)
  digitalWrite(13, HIGH);
  delay(1); // Wait for 1 millisecond(s)
  digitalWrite(13, LOW);
  delay(animationspeed); // Wait for animationspeed millisecond(s)
  digitalWrite(11, HIGH);
  delay(1); // Wait for 1 millisecond(s)
  digitalWrite(11, LOW);
  delay(1); // Wait for 1 millisecond(s)
  digitalWrite(9, HIGH);
  delay(animationspeed); // Wait for animationspeed millisecond(s)
  digitalWrite(9, LOW);
  delay(1); // Wait for 1 millisecond(s)
}