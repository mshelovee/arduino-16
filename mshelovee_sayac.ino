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
	for(int i =10; i>0; i--){
    lcd.print(String(i));
    delay(1000);
    lcd.clear();
    }
	}
  
 

void loop()
{
	// Do nothing here...
}
