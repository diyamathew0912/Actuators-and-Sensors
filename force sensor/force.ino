int forcePin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(forcePin);

  Serial.print("Force Value: ");
  Serial.println(value);

  delay(500);
}
