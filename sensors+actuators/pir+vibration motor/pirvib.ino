int pirPin = 2;
int motorPin = 8;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(motorPin, OUTPUT);
}

void loop() {

  int motion = digitalRead(pirPin);

  if (motion == HIGH) {
    digitalWrite(motorPin, HIGH);
  } else {
    digitalWrite(motorPin, LOW);
  }

  delay(100);
}
