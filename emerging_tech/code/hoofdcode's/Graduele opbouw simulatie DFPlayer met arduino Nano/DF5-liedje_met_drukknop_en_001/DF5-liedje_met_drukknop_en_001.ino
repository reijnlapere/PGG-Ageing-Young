#include <SoftwareSerial.h>
#include <DFPlayerMini_Fast.h>

SoftwareSerial mySerial(10, 11);
DFPlayerMini_Fast myDFPlayer;

const int knopPin = 2;
bool vorigeKnopStatus = HIGH;
bool speelt002 = false;

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
  pinMode(knopPin, INPUT_PULLUP);

  if (!myDFPlayer.begin(mySerial)) {
    Serial.println("DFPlayer niet gevonden!");
    while (true);
  }

  myDFPlayer.volume(25);
  myDFPlayer.loop(2); // Start met 002 in loop
  speelt002 = true;
}

void loop() {
  bool knopStatus = digitalRead(knopPin);

  if (vorigeKnopStatus == HIGH && knopStatus == LOW) {
    Serial.println("Knop ingedrukt → speel 001.mp3");

    myDFPlayer.stop();// Stop 002
    delay(5);
    myDFPlayer.play(1);// Speel 001

    delay(1500);// Wacht tot 001 klaar is

    myDFPlayer.loop(2);// Herstart 002 in loop
  }

  vorigeKnopStatus = knopStatus;
}

//Deze code hebben we uiteindelijk niet gebruikt aangezien het het liedje opnieuw van het begin opstart en niet hervat. Ook onderzochten we de optie om het bestand 001 af te spelen op het zelfde moment als 002 maar jammer genoeg is de DFPlayer nietv in staat zo een actie uit te voeren. 