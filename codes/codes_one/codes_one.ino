#include <LiquidCrystal_I2C.h>
#include <ESP8266WiFi.h>


const int temperaturePIN = A0;

LiquidCrystal_I2C lcd(0x27, 16, 2);

const int redPIN = 14;
const int greenPIN = 16;
const int buzzerPIN = 12;

void setup() {

  pinMode(redPIN, OUTPUT);
  pinMode(greenPIN, OUTPUT);
   Serial.begin(9600);
  lcd.begin();
  lcd.backlight();

}

void loop() {

  digitalWrite(redPIN, HIGH);
  digitalWrite(greenPIN, LOW);
  delay(1000);
  digitalWrite(redPIN, LOW);
  digitalWrite(greenPIN, HIGH);
  delay(1000);

//  lcd.setCursor(0,0);
//  lcd.print("GISA KAZE");
//  lcd.setCursor(0,1);
//  lcd.print("FREDISON");
//  //code to detect distance
//  lcd.clear();
//  delayMicroseconds(10);

}
