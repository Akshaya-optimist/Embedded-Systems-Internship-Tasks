# Temperature Sensor Monitoring – Task 1

This is Task 1 for my Embedded Systems Internship at CodTech.

## 🔧 Project Overview
- **Sensor Used**: TMP Analog Temperature Sensor (Tinkercad)
- **Platform**: Arduino UNO
- **Display**: Serial Monitor
- **Tool**: Tinkercad Simulation

## 📷 Circuit Diagram
![Circuit Diagram](https://github.com/Akshaya-optimist/Temperature-Sensor-Project/blob/main/Screenshot%202025-07-19%20163902.png?raw=true)

## 📜 Code
```cpp
const int sensorPin = A0;
float voltage, temperature;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int reading = analogRead(sensorPin);
  voltage = reading * (5.0 / 1023.0);
  temperature = (voltage - 0.5) * 100.0;




## 🔌 Task 2 – LED Control using Serial Commands

This project allows the user to control two LEDs using Serial commands in Tinkercad.

### 🔧 Project Overview
- **Sensor Used**: None  
- **Platform**: Arduino UNO  
- **Control**: Serial Monitor  
- **Tool**: Tinkercad Simulation  

### 🔁 Serial Commands

| Command | Action        |
|---------|---------------|
| `1`     | Turn ON LED 1 |
| `0`     | Turn OFF LED 1|
| `2`     | Turn ON LED 2 |
| `3`     | Turn OFF LED 2|

### 💡 Circuit Diagram

![Circuit Task 2](https://github.com/Akshaya-optimist/Temperature-Sensor-Project/blob/main/Screenshot%202025-07-20%20170830.png?raw=true)

### 📜 Code

```cpp
char inputChar;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT); // LED 1
  pinMode(12, OUTPUT); // LED 2
}

void loop() {
  if (Serial.available()) {
    inputChar = Serial.read();

    if (inputChar == '1') {
      digitalWrite(13, HIGH);
    } else if (inputChar == '0') {
      digitalWrite(13, LOW);
    } else if (inputChar == '2') {
      digitalWrite(12, HIGH);
    } else if (inputChar == '3') {
      digitalWrite(12, LOW);
    }
  }
}
```


  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");
  delay(1000);
}

