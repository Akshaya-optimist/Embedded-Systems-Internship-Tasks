# 🔌 Task 2 – LED Control using Serial Monitor (Simulated Home Automation)

This is Task 2 for my Embedded Systems Internship at CodTech.

## 🔧 Project Overview
- **Sensor Used**: None  
- **Platform**: Arduino UNO  
- **Control**: Serial Monitor  
- **Tool**: Tinkercad Simulation  

## 🔁 Serial Commands

| Command | Action        |
|---------|---------------|
| `1`     | Turn ON LED 1 |
| `0`     | Turn OFF LED 1|
| `2`     | Turn ON LED 2 |
| `3`     | Turn OFF LED 2|

## 💡 Circuit Diagram

![Circuit Task 2](https://github.com/Akshaya-optimist/Embedded-Systems-Internship-Tasks/blob/main/Task-2/Screenshot%202025-07-20%20170830.png?raw=true)

## 📜 Code

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
      digitalWrite(13, HIGH); // Turn ON LED 1
    } 
    else if (inputChar == '0') {
      digitalWrite(13, LOW);  // Turn OFF LED 1
    } 
    else if (inputChar == '2') {
      digitalWrite(12, HIGH); // Turn ON LED 2
    } 
    else if (inputChar == '3') {
      digitalWrite(12, LOW);  // Turn OFF LED 2
    }
  }
}

