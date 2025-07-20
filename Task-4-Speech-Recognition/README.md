# Task 4: Speech Recognition System (Simulated with Buttons)

This project simulates a basic speech recognition system using two buttons to represent voice commands. When a button is pressed:
- "Command ON" → Turns on an LED
- "Command OFF" → Turns it off

---

## 🧰 Components Used
- Arduino UNO
- 2 Pushbuttons
- 2 Resistors (10kΩ pull-down)
- 1 LED
- Breadboard and Jumper wires

---

## 🔌 Circuit Diagram

![Circuit Diagram](https://github.com/Akshaya-optimist/Embedded-Systems-Internship-Tasks/blob/main/Task-4-Speech-Recognition/Circuit2.png?raw=true)

---

## ⚙️ How it Works
- Button 1 simulates the voice command **“Turn ON”**
- Button 2 simulates **“Turn OFF”**
- A pull-down resistor ensures a clear LOW signal when not pressed
- The LED is connected to Pin 8 and responds to input

---

## 💻 Code

```cpp
const int buttonOn = 2;
const int buttonOff = 3;
const int ledPin = 8;

void setup() {
  pinMode(buttonOn, INPUT);
  pinMode(buttonOff, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(buttonOn) == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Speech Command: Turn ON");
    delay(500);
  }
  if (digitalRead(buttonOff) == HIGH) {
    digitalWrite(ledPin, LOW);
    Serial.println("Speech Command: Turn OFF");
    delay(500);
  }
}

