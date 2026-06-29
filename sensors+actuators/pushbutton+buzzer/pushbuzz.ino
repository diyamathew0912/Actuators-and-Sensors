int buttonPin = 2;
int buzzerPin = 8;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {

  if (digitalRead(buttonPin) == LOW) {
    tone(buzzerPin, 1000);
  } else {
    noTone(buzzerPin);
  }

}
