#include <Servo.h>

Servo gate;

int trigPin = 9;
int echoPin = 10;

void setup() {
  gate.attach(6);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  Serial.begin(9600);

  gate.write(0); // Gate closed
}

void loop() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);

  int distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);

  if (distance < 15) {
    gate.write(90); // Open gate
  } else {
    gate.write(0); // Close gate
  }

  delay(200);
}
