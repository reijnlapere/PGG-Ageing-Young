#include <SoftwareSerial.h>
#include <DFPlayerMini_Fast.h>

// DFPlayer via SoftwareSerial op pin 10 (RX), 11 (TX)
SoftwareSerial mySerial(10, 11);
DFPlayerMini_Fast myDFPlayer;

// Drukknop op pin 2
const int knopPin = 2;
bool vorigeKnopStatus = HIGH;

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);

  pinMode(knopPin, INPUT_PULLUP); // Interne pull-up weerstand

  if (!myDFPlayer.begin(mySerial)) {
    Serial.println("DFPlayer niet gevonden!");
    while (true);
  }

  Serial.println("DFPlayer klaar");
  myDFPlayer.volume(29); 
}

void loop() {
  bool knopStatus = digitalRead(knopPin);

  
  if (vorigeKnopStatus == HIGH && knopStatus == LOW) {
    Serial.println("Knop ingedrukt => speel 001.mp3");
    myDFPlayer.play(1);
    delay(500); // Debouncen 
  }

  vorigeKnopStatus = knopStatus;
}