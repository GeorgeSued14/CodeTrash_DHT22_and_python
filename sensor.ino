#include <DHT.h>

#define DHTTYPE DHT22
#define DHTPIN 7

DHT dht(DHTPIN, DHTTYPE); 

float umidade = 0;
float temperatura = 0;

void setup(){
  Serial.begin(9600);
  dht.begin();
}
void loop(){
    umidade = dht.readHumidity();
    temperatura = dht.readTemperature();
    Serial.print(umidade); Serial.println(" %");
    Serial.print(temperatura); Serial.println(" C°");
    delay(3000); 
}