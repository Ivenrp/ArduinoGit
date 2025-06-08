int ledm = 27;
int ledk = 26;
int ledh = 25;

void setup() {
  Serial.begin(9600);
  pinMode(ledm, OUTPUT);
  pinMode(ledk, OUTPUT);
  pinMode(ledh, OUTPUT);
}

void loop() {
  digitalWrite(ledm, HIGH);
  digitalWrite(ledk, LOW);
  digitalWrite(ledh, LOW);
  Serial.println("Merah Menyala BOSQu");
  Serial.println("kuning Mati");
  Serial.println("Hijau Mati");
  delay(1000);
  digitalWrite(ledm, LOW);
  digitalWrite(ledk, HIGH);
  digitalWrite(ledh, LOW);
  Serial.println("Kuning Menyala BOSQu");
  Serial.println("Merah Mati");
  Serial.println("Hijau Mati");
  delay(2000);
  digitalWrite(ledm, LOW);
  digitalWrite(ledk, LOW);
  digitalWrite(ledh, HIGH);
  Serial.println("Hijau Menyala BOSQu");
  Serial.println("Merah Mati");
  Serial.println("kuning Mati");
  delay(3000);
}
