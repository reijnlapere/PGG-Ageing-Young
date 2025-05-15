#include <SoftwareSerial.h>
#include <DFPlayerMini_Fast.h>

// SoftwareSerial op pin 10 (RX), 11 (TX)
SoftwareSerial mySerial(10, 11);
DFPlayerMini_Fast myDFPlayer;

void setup() {
  Serial.begin(9600);       
  mySerial.begin(9600); // communicatie met DFPlayer

  if (!myDFPlayer.begin(mySerial)) {
    Serial.println("DFPlayer niet gevonden!");
    while (true);
  }

  Serial.println("DFPlayer klaar");
  myDFPlayer.volume(29); //aanpassen van getal = aanpassen volume 
  Serial.println("volume aan");
  myDFPlayer.play(1);       // Speel bestand 001 op de micro SD-kaart
  Serial.println("geluid gespeeld");
}

void loop() {
  //geen acties nodig
}