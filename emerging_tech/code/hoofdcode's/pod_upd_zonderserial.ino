#include <WiFiNINA.h>
#include <WiFiUdp.h>

// WiFi-gegevens
const char* ssid = "your_SSID";
const char* password = "your_PASSWORD";

// Pin definities
const int ledPin = 3;
const int buttonPin = 2;
const int motorPin = 4;

WiFiUDP udp;
const unsigned int udpPort = 8888;

void setup() {
  //Serial.begin(9600);
  //while (!Serial);

  // Initialiseer de pinnen
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(motorPin, OUTPUT);

  // Verbinden met WiFi
  //Serial.print("Connecting to WiFi...");
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    //Serial.print(".");
  }
  //Serial.println("Connected!");

  // Start UDP
  udp.begin(udpPort);
}

void loop() {
  int packetSize = udp.parsePacket();
  if (packetSize) {
    char command[packetSize + 1]; // Zorg ervoor dat de buffer groot genoeg is
    udp.read(command, packetSize);
    command[packetSize] = '\0'; // Voeg een null-terminator toe aan de string
    String commandStr = String(command);
    commandStr.trim(); // Corrigeer type conversie
    //Serial.print("Received command: ");
    //Serial.println(commandStr);
    if (commandStr == "TURN_ON_LED") {
      digitalWrite(ledPin, HIGH);
      //Serial.println("LED turned on");
      digitalWrite(motorPin, HIGH);
      //Serial.println("MOTOR turned on");
      // Wait for button press
      while (digitalRead(buttonPin) == HIGH) {
      }

      // Knop ingedrukt, zet LED en motor uit, en informeer de master
      digitalWrite(ledPin, LOW);
      digitalWrite(motorPin, LOW); // Zet trilmotor uit
      udp.beginPacket(udp.remoteIP(), udpPort);
      udp.print("BUTTON_PRESSED");
      udp.endPacket();
      //Serial.println("Button pressed, notifying master");
    }
  }
}