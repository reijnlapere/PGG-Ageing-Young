#include <DFRobotDFPlayerMini.h>

DFRobotDFPlayerMini player;

void setup() {
  Serial.begin(9600);
  Serial1.begin(9600); //Serial 1 is nodig om connectie te maken met DFPlayer. Het is een hardwarematige UART. 

  Serial.println("Initialiseren...");

  if (!player.begin(Serial1)) {
    Serial.println("DFPlayer niet gevonden!");
    while (true);
  }

  Serial.println("DFPlayer verbonden!");
  player.volume(20);
  player.play(1); // Speel 0001.mp3 af uit root
}

void loop() {
}
