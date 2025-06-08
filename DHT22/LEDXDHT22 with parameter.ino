#include <DHT.h>
DHT dht(13, DHT22);

void setup(){
 pinMode(14, OUTPUT);
 pinMode(12, OUTPUT);
 Serial.begin(9600);
 dht.begin();
}

void loop(){
 float kel = dht.readHumidity();
 float temp = dht.readTemperature();

if(temp < 30 ){
  digitalWrite(14, HIGH);
  digitalWrite(12, LOW);
}
if(temp >= 30 ){
  digitalWrite(14, LOW);
  digitalWrite(12, HIGH);
}
 Serial.print("Kelembapan: ");
 Serial.println(kel);
 Serial.print("Suhu: ");
 Serial.println(temp);
 delay(2000);
}
