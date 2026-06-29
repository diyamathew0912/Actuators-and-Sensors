int fsrPin = A0;
int motorPin = 9;

void setup() {
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  int fsrValue = analogRead(fsrPin);

  Serial.println(fsrValue);

  if (fsrValue > 300) {
    digitalWrite(motorPin, HIGH);
  } else {
    digitalWrite(motorPin, LOW);
  }

  delay(100);
}
