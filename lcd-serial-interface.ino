#include <LiquidCrystal.h>
LiquidCrystal lcd(11,12,4,5,6,7);
void setup(){
Serial.begin(9600);
//lcd.begin(16,2);
}
void loop(){
  if(Serial.available()>0){
    char a = Serial.read();
    lcd.print(a);
    delay(10);
  }
  
}
