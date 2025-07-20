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
    delay(500); // debounce
  }
  if (digitalRead(buttonOff) == HIGH) {
    digitalWrite(ledPin, LOW);
    Serial.println("Speech Command: Turn OFF");
    delay(500); // debounce
  }
}
