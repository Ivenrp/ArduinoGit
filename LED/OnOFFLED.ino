const int ledPin = 14; // GPIO2
String command;

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW); // Pastikan LED mati di awal
  Serial.println("Simulasi Kontrol LED via Serial (mirip IoT)");
  Serial.println("Ketik 'ON' untuk menyalakan LED, 'OFF' untuk mematikan.");
}

void loop() {
  if (Serial.available() > 0) { // Jika ada data masuk di Serial
    command = Serial.readStringUntil('\n'); // Baca string sampai newline
    command.trim(); // Hapus spasi ekstra atau karakter newline

    Serial.print("Perintah diterima: ");
    Serial.println(command);

    if (command.equalsIgnoreCase("ON")) {
      digitalWrite(ledPin, HIGH);
      Serial.println("LED Dinyalakan");
    } else if (command.equalsIgnoreCase("OFF")) {
      digitalWrite(ledPin, LOW);
      Serial.println("LED Dimatikan");
    } else {
      Serial.println("Perintah tidak dikenal. Gunakan 'ON' atau 'OFF'.");
    }
  }
}