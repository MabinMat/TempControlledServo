/*LCD display test 
 * 
 */


 #include <LiquidCrystal.h>

//set pins
 int rs = 12;
 int en = 11;
 int d4 = 5;
 int d5 = 4;
 int d6 = 3;
 int d7 = 2;
int counter = 0;

//initialize LCD
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
  
void setup() {
  //start communication
 lcd.begin(16, 2);
 lcd.print("LCD test:");
 

}

void loop() {
 //switch to next line
 lcd.setCursor(0,1);
 lcd.print("Seconds:");
 lcd.print(counter);
 delay(1000);
 counter++;

}