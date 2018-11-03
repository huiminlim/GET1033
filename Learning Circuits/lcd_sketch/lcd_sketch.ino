#include <LiquidCrystal.h>  
int Contrast=20;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);   

void setup(){ 
  analogWrite(6,Contrast);
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");
}  

void loop(){  
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
}
