int flexPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int flexValue = analogRead(flexPin);

  Serial.print("Flex Value: ");
  Serial.println(flexValue);

  delay(500);
}
