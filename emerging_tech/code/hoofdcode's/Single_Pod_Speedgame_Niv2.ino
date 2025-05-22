#include <Adafruit_NeoPixel.h>

#define LED_PIN     2
#define BUTTON_PIN  3
#define MOTOR_PIN   4
#define NUM_LEDS    20

Adafruit_NeoPixel ring(NUM_LEDS, LED_PIN, NEO_GRB + NEO_KHZ800);

int score = 0;
int presses = 0;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(MOTOR_PIN, OUTPUT);
  ring.begin();
  ring.show();
  randomSeed(analogRead(0));
  waitForStart();
}

void loop() {
  if (presses >= 5) {
    showScore(score);
    waitForRestart();
    resetGame();
  }

  int waitTime = random(0, 6001);
  delay(waitTime);

  int chance = random(1, 8);
  bool isRed = (chance <= 2);

  digitalWrite(MOTOR_PIN, HIGH);

  if (isRed) {
    setRingColor(255, 0, 0); // Rood
    unsigned long startTime = millis();
    while (millis() - startTime < 2000) {
      if (digitalRead(BUTTON_PIN) == LOW) {
        score -= 2;
        flashWarning();
        break;
      }
    }
  } else {
    setRingColor(255, 255, 255); // Wit
    unsigned long startTime = millis();
    while (digitalRead(BUTTON_PIN) == HIGH) {
      // wachten
    }
    unsigned long reactionTime = millis() - startTime;

    if (reactionTime < 750) {
      score += 3;
    } else if (reactionTime < 1500) {
      score += 2;
    } else {
      score += 1;
    }

    presses++;
  }

  ring.clear();
  ring.show();
  digitalWrite(MOTOR_PIN, LOW);
  delay(500);
}

void setRingColor(uint8_t r, uint8_t g, uint8_t b) {
  for (int i = 0; i < NUM_LEDS; i++) {
    ring.setPixelColor(i, ring.Color(r, g, b));
  }
  ring.show();
}

void flashWarning() {
  for (int i = 0; i < 2; i++) {
    setRingColor(255, 0, 0);
    delay(150);
    ring.clear();
    ring.show();
    delay(150);
  }
}

void showScore(int totalScore) {
  ring.clear();
  int ledIndex = 0;

  while (totalScore >= 10 && ledIndex < NUM_LEDS) {
    ring.setPixelColor(ledIndex++, ring.Color(255, 215, 0)); // Goud
    totalScore -= 10;
  }
  while (totalScore >= 5 && ledIndex < NUM_LEDS) {
    ring.setPixelColor(ledIndex++, ring.Color(202, 0, 121)); // Paars
    totalScore -= 5;
  }
  while (totalScore >= 1 && ledIndex < NUM_LEDS) {
    ring.setPixelColor(ledIndex++, ring.Color(0, 137, 182)); // Groen
    totalScore -= 1;
  }

  ring.show();
}

void waitForStart() {
  while (true) {
    if (digitalRead(BUTTON_PIN) == LOW) {
      unsigned long startTime = millis();
      while (digitalRead(BUTTON_PIN) == LOW) {
        if (millis() - startTime >= 1500) {
          flashStart();
          return;
        }
      }
    }
  }
}

void waitForRestart() {
  // Wacht tot knop 1 seconde wordt ingedrukt
  while (true) {
    if (digitalRead(BUTTON_PIN) == LOW) {
      unsigned long startTime = millis();
      while (digitalRead(BUTTON_PIN) == LOW) {
        if (millis() - startTime >= 1000) {
          ring.clear();
          ring.show();
          delay(500);
          waitForStart();
          return;
        }
      }
    }
  }
}

void flashStart() {
  for (int i = 0; i < 2; i++) {
    setRingColor(255, 215, 0); // Goud
    delay(200);
    ring.clear();
    ring.show();
    delay(200);
  }
}

void resetGame() {
  score = 0;
  presses = 0;
}


