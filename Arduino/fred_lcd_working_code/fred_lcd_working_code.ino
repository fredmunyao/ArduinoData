#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
	// initialize the LCD
	lcd.begin();

	// Turn on the blacklight and print a message.
	lcd.backlight();
	
}

void loop()
{
  lcd.setCursor(0,0); //position of (first row, first column).
  lcd.print("ENGINEER FRED");
  delay(1000);
  lcd.setCursor(0,3);
  lcd.print("SMART SANITIZER");
  delay(4000);
  lcd.clear(); //clean the screen.
  lcd.setCursor(4,0);
  lcd.print("COVID-19");
  delay(1000);
  lcd.setCursor(0,3);
  lcd.print("REAL TIME UPDATES");
  delay(4000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("CASES 1,324");
  delay(1000);
  lcd.setCursor(0,3);
  lcd.print("DEATHS 84");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("RECOVERIES 254");
  delay(5000);
  lcd.clear();
  
  
	// Do something here...
}
