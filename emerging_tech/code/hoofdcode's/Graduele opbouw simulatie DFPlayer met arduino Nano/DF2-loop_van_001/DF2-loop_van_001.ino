#include <SoftwareSerial.h>
#include <DFPlayerMini_Fast.h>

// SoftwareSerial op pin 10 (RX), 11 (TX)
SoftwareSerial mySerial(10, 11);
DFPlayerMini_Fast myDFPlayer;

void setup() {
  Serial.begin(9600);  
  mySerial.begin(9600);  // communicatie met DFPlayer

  if (!myDFPlayer.begin(mySerial)) {
    Serial.println("DFPlayer niet gevonden!");
    while (true);
  }

  Serial.println("DFPlayer klaar");
  myDFPlayer.volume(29);    
}

void loop() {
  myDFPlayer.play(1);       // Speelt bestand 001 van de micro SD-kaart
  Serial.println("Geluid afgespeeld");
  delay(2000);              // Wacht 2 seconden
}
