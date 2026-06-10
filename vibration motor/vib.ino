int motorPin = 9;

void setup() {
  pinMode(motorPin, OUTPUT);
}

void loop() {
  digitalWrite(motorPin, HIGH); // ON vibration
  delay(1000);

  digitalWrite(motorPin, LOW);  // OFF
  delay(1000);
}
