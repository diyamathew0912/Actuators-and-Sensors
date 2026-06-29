#include <Adafruit_NeoPixel.h>

#define PIN 6
#define NUMPIXELS 4

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int tiltPin = 2;

void setup() {
  pinMode(tiltPin, INPUT_PULLUP);

  pixels.begin();
  pixels.clear();
  pixels.show();
}

void loop() {

  int tiltState = digitalRead(tiltPin);

  if (tiltState == LOW) {

    for (int i = 0; i < NUMPIXELS; i++) {
      pixels.setPixelColor(i, pixels.Color(0, 255, 0));
    }

    pixels.show();

  } else {

    pixels.clear();
    pixels.show();
  }

  delay(100);
}
