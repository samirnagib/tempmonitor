#include <Wire.h>

#include <DHT12.h>
#include <M5Stack.h>
DHT12 dht12;


void setup() {
    
    M5.begin();
    Wire.begin();
    M5.Lcd.setBrightness(20);
    M5.Lcd.setCursor(0, 0);
    M5.Lcd.setTextColor(BLUE, BLACK);
    M5.Lcd.setTextSize(2);


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
    M5.Lcd.print("Hum : ");
    M5.Lcd.setTextColor(PINK, BLACK);
    M5.Lcd.printf("%2.1f", hum);
    M5.Lcd.setTextColor(WHITE, BLACK);
    M5.Lcd.printf(" %%\n");

    delay(15000);

  // put your main code here, to run repeatedly:

}
