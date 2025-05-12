const int ledPin = 3;
const int motorPin = 4;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(motorPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  Serial.println("LED brandt");
  delay(1000);

  digitalWrite(ledPin, LOW);
  Serial.println("er gebeurt niets");
  delay(1000);

  digitalWrite(motorPin, HIGH);
  Serial.println("Trilmotor trilt");
  delay(1000);

  digitalWrite(motorPin, LOW);
  Serial.println("er gebeurt niets");
  delay(1000);
}
