#include "DHT.h" // Library untuk sensor DHT

#define DHTPIN 14     // Pin GPIO tempat sensor DHT terhubung (GPIO4)
#define DHTTYPE DHT22   // Tipe sensor DHT (DHT22)

// Inisialisasi objek DHT
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  Serial.println("Simulasi Sensor DHT22 dimulai!");
  dht.begin(); // Mulai sensor DHT
}

void loop() {
  // Tunggu beberapa detik antar pembacaan
  delay(2000); // Jeda 2 detik (DHT22 butuh waktu untuk sampling)

  // Membaca kelembaban
  float h = dht.readHumidity();
  // Membaca suhu dalam Celsius (default)
  float t = dht.readTemperature();
  // Membaca suhu dalam Fahrenheit (jika diperlukan)
  // float f = dht.readTemperature(true);

  // Cek apakah pembacaan berhasil (tidak NaN - Not a Number)
  if (isnan(h) || isnan(t)) {
    Serial.println("Gagal membaca dari sensor DHT!");
    return;
  }

  // Hitung heat index dalam Fahrenheit (opsional)
  // float hif = dht.computeHeatIndex(f, h);
  // Hitung heat index dalam Celsius (opsional)
  // float hic = dht.computeHeatIndex(t, h, false);

  Serial.print("Kelembaban: ");
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("Suhu: ");
  Serial.print(t);
  Serial.println(" *C");
  // Serial.print(f);
  // Serial.println(" *F");
  // Serial.print("Heat index: ");
  // Serial.print(hic);
  // Serial.print(" *C ");
  // Serial.print(hif);
  // Serial.println(" *F");
}