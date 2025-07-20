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
      digitalWrite(13, HIGH);  // Turn ON LED 1
    } else if (inputChar == '0') {
      digitalWrite(13, LOW);   // Turn OFF LED 1
    } else if (inputChar == '2') {
      digitalWrite(12, HIGH);  // Turn ON LED 2
    } else if (inputChar == '3') {
      digitalWrite(12, LOW);   // Turn OFF LED 2
    }
  }
}
