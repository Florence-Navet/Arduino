// C++ code
//
int ledPin = 11;
int buttonPin = 12;
int fanPin = 3;

int ledState = LOW;
int fanState = LOW;

int fanOn = 0;
int currentButtonState;
int lastButtonState;
long buttonTimer = 0;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(fanPin, INPUT);
  currentButtonState = digitalRead(buttonPin);
}

void loop()
{
  lastButtonState = currentButtonState;
  currentButtonState = digitalRead(buttonPin);
  
  if (lastButtonState == HIGH && currentButtonState == LOW)
  {
    if (fanOn == 0)
    {
      buttonTimer = millis();
      if (ledState == LOW)
      {
        ledState = HIGH;
      }
    }
    else
    {
      buttonTimer = 0;
      fanOn = 0;
      fanState = LOW;
    }
  }
  else if (millis() - buttonTimer > 2000)
  {
    if (ledState == HIGH)
    {
      ledState = LOW;
      fanOn = 1;
      fanState = HIGH;
    }
  }
  
  digitalWrite(ledPin, ledState);
  digitalWrite(fanPin, fanState);
}