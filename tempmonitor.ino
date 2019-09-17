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
    M5.Lcd.setTextSize(5);
    M5.Lcd.printf("Temp: %2.1f", tmp);
    M5.Lcd.printf("Hum.: %2.1f", hum);

    delay(15000);

  // put your main code here, to run repeatedly:

}
