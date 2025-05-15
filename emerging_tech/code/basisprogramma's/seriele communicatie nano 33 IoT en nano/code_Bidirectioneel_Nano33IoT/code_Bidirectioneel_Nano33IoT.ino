//arduino nano 33 IoT
void setup() {
  Serial.begin(9600);      //voor te kunnen debuggen. 
  Serial1.begin(9600);    

  delay(1000);
}

void loop() {
  // Bericht verzenden
  Serial1.println("Hallo van 33 IoT");
  Serial.println("Verzonden naar Nano");


  delay(500); 

  if (Serial1.available()) {
    String antwoord = Serial1.readStringUntil('\n');
    Serial.print("Antwoord ontvangen: ");
    Serial.println(antwoord);
  }

  delay(2000);
}
