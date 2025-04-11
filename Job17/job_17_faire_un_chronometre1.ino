// C++ code
//
/*
  LiquidCrystal Library - Hello World

   Demonstrates the use of a 16x2 LCD display.
  The LiquidCrystal library works with all LCD
  displays that are compatible with the  Hitachi
  HD44780 driver. There are many of them out
  there, and you  can usually tell them by the
  16-pin interface.

  This sketch prints "Hello World!" to the LCD
  and shows the time.

  The circuit:
  * LCD RS pin to digital pin 12
  * LCD Enable pin to digital pin 11
  * LCD D4 pin to digital pin 5
  * LCD D5 pin to digital pin 4
  * LCD D6 pin to digital pin 3
  * LCD D7 pin to digital pin 2
  * LCD R/W pin to ground
  * LCD VSS pin to ground
  * LCD VCC pin to 5V
  * 10K resistor:
  * ends to +5V and ground
  * wiper to LCD VO pin (pin 3)

  Library originally added 18 Apr 2008  by David
  A. Mellis
  library modified 5 Jul 2009  by Limor Fried
  (http://www.ladyada.net)
  example added 9 Jul 2009  by Tom Igoe
  modified 22 Nov 2010  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/LiquidCrystal
*/

#include <LiquidCrystal.h>

int seconds = 0;
int currentButtonState;
int lastButtonState;
int buttonPin = 8;
int timerOn = 0;
int buttonTimer = 0;
int is_reset = 0;
char message1[] = "Chrono START";
char message2[] = "Chono STOP";
char message3[] = "Chrono RESET";
LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);

void setup()
{
  pinMode(buttonPin, INPUT_PULLUP);
  lcd_1.begin(16, 2); // Set up the number of columns and rows on the LCD.
  currentButtonState = digitalRead(buttonPin);
  // Print a message to the LCD.
  
}

void loop()
{
  lastButtonState = currentButtonState;
  currentButtonState = digitalRead(buttonPin);
 
  
  if (lastButtonState == HIGH && currentButtonState == LOW)
  {
    buttonTimer = millis();
    
    if (timerOn == 1)
    {
      timerOn = 0;
      lcd_1.clear();
    }  
    else
    {
      timerOn = 1;
      lcd_1.clear();
    }
  }
  
  else if (lastButtonState == LOW && currentButtonState == LOW && millis() - buttonTimer > 2000)
  {
    seconds = 0;
    lcd_1.setCursor(0, 0);
    lcd_1.print(message3);
    is_reset = 1;
  }

  else
  {
    if(timerOn)
    {
      lcd_1.setCursor(0, 0);
      lcd_1.print(message1);
      seconds += 1;
      delay(1000);
      
    }
    else
    {
      if (is_reset)
      {
        lcd_1.clear();
        is_reset = 0;
      }
      lcd_1.setCursor(0, 0);
      lcd_1.print(message2);
    }
  }
  

  lcd_1.setCursor(0, 1);
  lcd_1.print(seconds);
  
  
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting
  // begins with 0):
  
  // print the number of seconds since reset:
  
   // Wait for 1000 millisecond(s)
  
}