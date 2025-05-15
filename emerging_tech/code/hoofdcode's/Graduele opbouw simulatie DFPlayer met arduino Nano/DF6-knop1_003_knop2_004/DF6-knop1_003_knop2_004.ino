#include <SoftwareSerial.h>
#include <DFPlayerMini_Fast.h>

// DFPlayer via SoftwareSerial op pin 10 (RX), 11 (TX)
SoftwareSerial mySerial(10, 11);
DFPlayerMini_Fast myDFPlayer;

// Drukknoppen
const int knop1Pin = 2; // Speelt 003 = correct
const int knop2Pin = 3; // Speelt 004 = fout

bool vorigeKnop1Status = HIGH;
bool vorigeKnop2Status = HIGH;

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);

  pinMode(knop1Pin, INPUT_PULLUP);
  pinMode(knop2Pin, INPUT_PULLUP);

  if (!myDFPlayer.begin(mySerial)) {
    Serial.println("DFPlayer niet gevonden!");
    while (true);
  }

  Serial.println("DFPlayer klaar");
  myDFPlayer.volume(29);
}

void loop() {
  bool knop1Status = digitalRead(knop1Pin);
  bool knop2Status = digitalRead(knop2Pin);

  // Knop 1 ingedrukt => speel 003
  if (vorigeKnop1Status == HIGH && knop1Status == LOW) {
    Serial.println("Knop 1 ingedrukt → speel 003.mp3");
    myDFPlayer.play(3);
    delay(500); // Debounce
  }

  // Knop 2 ingedrukt => speel 004
  if (vorigeKnop2Status == HIGH && knop2Status == LOW) {
    Serial.println("Knop 2 ingedrukt → speel 004.mp3");
    myDFPlayer.play(4);
    delay(500); // Debounce
  }

  vorigeKnop1Status = knop1Status;
  vorigeKnop2Status = knop2Status;
}
