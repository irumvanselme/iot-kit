#include <LiquidCrystal_I2C.h>
#include <ESP8266WiFi.h>


const int ledPIN = 15;
const int buzzerPIN = 13;
const int temperaturePIN = A0;

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(9600);
  lcd.begin();
  lcd.backlight();

}

void loop() {

  lcd.setCursor(0,0);
  lcd.print("GISA KAZE");
  lcd.setCursor(0,1);
  lcd.print("FREDISON");
  //code to detect distance
  lcd.clear();
  delayMicroseconds(10);

}
