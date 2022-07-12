#include <LiquidCrystal_I2C.h>
#include <ESP8266WiFi.h>


const int redPIN = 14;
const int greenPIN = 16;
const int buzzerPIN = 12;
WiFiClient wifiClient;

const int temperaturePIN = A0;

const char *host = "192.168.1.150";

void setup()
{

      WiFi.begin("RCA-WiFi", "rca@2019");

      pinMode(redPIN, OUTPUT);
      pinMode(greenPIN, OUTPUT);
      pinMode(buzzerPIN, OUTPUT);

     Serial.begin(9600);

   lcd.begin( 5, 4);
      lcd.init();
      lcd.backlight(
}

void loop()

{
  
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
        //  lcd.clear();    //  delayMicroseconds(10);
}