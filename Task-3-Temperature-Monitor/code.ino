#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);  // I2C address 0x27

const int sensorPin = A0;

void setup() {
  Serial.begin(9600);     
  lcd.init();             // Initialize LCD
  lcd.backlight();        // Turn on backlight
}

void loop() {
  int reading = analogRead(sensorPin);
  float voltage = reading * 5.0 / 1024.0;
  float temperatureC = voltage * 100.0;

  // Serial output
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  // LCD output
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperatureC);
  lcd.print(" C");

  delay(1000);
}

