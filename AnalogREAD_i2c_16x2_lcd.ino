

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display





void setup(void) 
{
  Serial.begin(115200);

    
  Serial.println("Hello!");
  lcd.init();                      // initialize the lcd 
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(1,0);
  lcd.print("Demo ARDUINO");
  lcd.setCursor(2,0);
  lcd.print("ANALOGO");
}
void loop(void) 
{
  int A =analogRead(A0);
  Serial.print("Lectura Analoga:         "); Serial.println(A);
  
  int B =analogRead(A1);
  Serial.print("Lectura Analoga:         "); Serial.println(B);

  int C =analogRead(A2);
  Serial.print("Lectura Analoga:         "); Serial.println(C);

  Serial.println("");
  lcd.setCursor(0,0);
  lcd.print("X: ");
  lcd.print(A);
    lcd.print(" Y: ");
  lcd.print(B);
  
  lcd.setCursor(0,1);
   lcd.print(" Z: ");
  lcd.print(C);
  delay(100);
  lcd.clear();

}
