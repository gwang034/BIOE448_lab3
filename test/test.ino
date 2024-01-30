#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
lcd.begin(16, 2); //Initiate the LCD in a 16x2 configuration
lcd.print("My name is:")
lcd.setCursor(0, 1);
lcd.print("[Your name here!]")
}

void loop() {
delay(50) //Wait 50 ms
}
