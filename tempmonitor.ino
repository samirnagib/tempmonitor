#include <Wire.h>
#include <DHT12.h>
#include <M5Stack.h>
DHT12 dht12;

void setup() {
    
    M5.begin();
    Wire.begin();
    M5.Lcd.setBrightness(30);
    M5.Lcd.setCursor(0, 0);

}

void loop() {
    m5.Lcd.clear();
    float tmp = dht12.readTemperature();
    float hum = dht12.readHumidity();
    M5.Lcd.setCursor(0, 0);
    M5.Lcd.setTextColor(WHITE, BLACK);
    M5.Lcd.setTextSize(3);
    M5.Lcd.print("Temp: ");
    M5.Lcd.setTextColor(YELLOW, BLACK);
    M5.Lcd.printf("%2.1f", tmp);
    M5.Lcd.setTextColor(WHITE, BLACK);
    M5.Lcd.printf(" C\r\n");
    M5.Lcd.println("");
    M5.Lcd.print("Hum : ");
    M5.Lcd.setTextColor(GREEN, BLACK);
    M5.Lcd.printf("%2.1f", hum);
    M5.Lcd.setTextColor(WHITE, BLACK);
    M5.Lcd.printf(" %%\n");
    M5.Lcd.setTextSize(2);
    M5.Lcd.setCursor(10, 210);
    M5.Lcd.println("Samir Lins Nagib");
    M5.Lcd.drawRect(5,200,300,30,RED);
    delay(15000);

}
