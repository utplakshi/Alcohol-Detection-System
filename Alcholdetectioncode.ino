#include <LiquidCrystal.h>
#define gas_Pin 7
// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int gas_value;
void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);  
  pinMode(6,OUTPUT);
}
void loop()
{
  gas_value = digitalRead(gas_Pin); 
  if(gas_value==1)
  {
   digitalWrite(6,HIGH);
   lcd.setCursor (0, 1);
   lcd.print("ALCOHOL DEDUCTED");
   lcd.display();
   }
   else
   {
    digitalWrite(6,LOW);
    lcd.setCursor (0, 1);
    lcd.print("NO ALCOHOL");
    lcd.display();
   }
   delay(1000); 
   lcd.clear(); 
}
