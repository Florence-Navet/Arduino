int ledPin = 11;
void setup()
{
  pinMode(11, OUTPUT);
}

void loop()
{
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5)
  {
    analogWrite(ledPin, fadeValue);
    delay(30);      
  }
                
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5)
  {
    analogWrite(ledPin, fadeValue);
    delay(30);      
  }
}