const int ledPin = 14;

void setup() {
  Serial.begin(115200);
  Serial.println("Simulasi Blink LED");

  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  Serial.println("LED menyala");
  delay(2000);

  digitalWrite(ledPin, LOW);
  Serial.println("LED mati");
  delay(2000);
}
