#include <SoftwareSerial.h>
#include <DFPlayerMini_Fast.h>

// SoftwareSerial op pin 10 (RX), 11 (TX)
SoftwareSerial mySerial(10, 11);
DFPlayerMini_Fast myDFPlayer;

void setup() {
  Serial.begin(9600); 
  mySerial.begin(9600); 

  if (!myDFPlayer.begin(mySerial)) {
    Serial.println("DFPlayer niet gevonden!");
    while (true);
  }

  Serial.println("DFPlayer klaar");
  myDFPlayer.volume(29); //aanpassen van volume 
}

void loop() {
  myDFPlayer.play(1); // Speel 001
  Serial.println("001.mp3 afgespeeld");
  delay(2000); // Wacht 2 seconden

  myDFPlayer.play(2); // Speel 002 bestand van op de Micro SD
  Serial.println("002.mp3 afgespeeld");
  delay(2000); // Wacht 2 seconden
}
