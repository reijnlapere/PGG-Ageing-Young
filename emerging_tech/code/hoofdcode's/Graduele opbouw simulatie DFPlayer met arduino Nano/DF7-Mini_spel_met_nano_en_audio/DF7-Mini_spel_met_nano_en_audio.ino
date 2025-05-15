#include <SoftwareSerial.h>
#include <DFPlayerMini_Fast.h>

SoftwareSerial mySerial(10, 11);
DFPlayerMini_Fast myDFPlayer;

const int knop1Pin = 2;
const int knop2Pin = 3;
const int led1Pin = 4;
const int led2Pin = 5;

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);

  pinMode(knop1Pin, INPUT_PULLUP);
  pinMode(knop2Pin, INPUT_PULLUP);
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);

  if (!myDFPlayer.begin(mySerial)) {
    Serial.println("DFPlayer niet gevonden!");
    while (true);
  }

  myDFPlayer.volume(25);
  Serial.println("Spel gestart!");
}

void loop() {
  int juisteKeuze = random(1, 3); // 1 of 2

  if (juisteKeuze == 1) {
    digitalWrite(led1Pin, HIGH);
    Serial.println("LED 1 aan");
  } else {
    digitalWrite(led2Pin, HIGH);
    Serial.println("LED 2 aan");
  }

  bool keuzeGemaakt = false;
  while (!keuzeGemaakt) {
    if (digitalRead(knop1Pin) == LOW) {
      keuzeGemaakt = true;
      if (juisteKeuze == 1) {
        Serial.println("Correcte knop 1 → speel 003");
        myDFPlayer.play(3);
      } else {
        Serial.println("Foute knop 1 → speel 004");
        myDFPlayer.play(4);
      }
    }

    if (digitalRead(knop2Pin) == LOW) {
      keuzeGemaakt = true;
      if (juisteKeuze == 2) {
        Serial.println("Correcte knop 2 → speel 003");
        myDFPlayer.play(3);
      } else {
        Serial.println("Foute knop 2 → speel 004");
        myDFPlayer.play(4);
      }
    }
  }


  digitalWrite(led1Pin, LOW);
  digitalWrite(led2Pin, LOW);

  delay(3000); 
}
