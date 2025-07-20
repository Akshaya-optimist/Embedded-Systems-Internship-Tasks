# Task 3: Temperature Monitoring System

This project reads temperature data from an LM35 sensor and displays it on both:
- A 16x2 I2C LCD Display
- The Serial Monitor

---

## 🧰 Components Used
- Arduino UNO
- LM35 Temperature Sensor
- I2C 16x2 LCD (PCF8574-based)
- Jumper Wires
- Breadboard

---

## 🔌 Circuit Diagram

![Circuit Diagram](https://github.com/Akshaya-optimist/Embedded-Systems-Internship-Tasks/blob/main/Task-3-Temperature-Monitor/circuit.png?raw=true)

---

## ⚙️ How it Works
- The LM35 outputs analog voltage proportional to temperature.
- Arduino reads this voltage from analog pin A0.
- The voltage is converted to Celsius.
- The temperature is displayed on:
  - The Serial Monitor
  - A 16x2 I2C LCD using the `LiquidCrystal_I2C` library

---

## 💻 Output
- Temperature is printed in the Serial Monitor every second.
- LCD shows real-time temperature readings.

---

## 🔧 Arduino Code

```cpp
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);  // I2C address 0x27

const int sensorPin = A0;

void setup() {
  Serial.begin(9600);     
  lcd.init();             
  lcd.backlight();        
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
---
## 📁 Files Included
- `code.ino` – Arduino source code
- `circuit.png` – Tinkercad circuit diagram
- `output.png` – LCD and Serial Monitor screenshot
