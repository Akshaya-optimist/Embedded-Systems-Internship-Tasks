const int sensorPin = A0;
float voltage, temperature;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int reading = analogRead(sensorPin);
  voltage = reading * (5.0 / 1023.0);       // Convert analog reading to voltage
  temperature = (voltage - 0.5) * 100.0;    // Convert voltage to Celsius

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  delay(1000);  // Wait 1 second
}
