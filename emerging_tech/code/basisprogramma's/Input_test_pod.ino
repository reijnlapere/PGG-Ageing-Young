const int ledPin = 3;
const int motorPin = 4;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(motorPin, OUTPUT);
}

void loop() {

  digitalWrite(ledPin, HIGH);
  delay(1000);

  digitalWrite(ledPin, LOW);
  delay(1000);

  digitalWrite(motorPin, HIGH);
  delay(1000);

  digitalWrite(motorPin, LOW);
  delay(1000);
}
