// arduino nano, ontvanger. 
#include <SoftwareSerial.h>

// Pin 10 = RX, Pin 11 = TX
SoftwareSerial mySerial(10, 11);

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600); //omdat je niet werkt met TX , RX poorten maar met pinnen die als TX, RX fungeren 

  Serial.println("Klaar om data te ontvangen...");
}

void loop() {
  if (mySerial.available()) {
    String ontvangen = mySerial.readStringUntil('\n');
    Serial.print("Ontvangen: ");
    Serial.println(ontvangen);

    // Antwoord terugsturen
    mySerial.println("Hallo terug van Nano!");
    Serial.println("Antwoord verzonden.");
  }
}
