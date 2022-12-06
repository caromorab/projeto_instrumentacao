#include <OneWire.h>
#include <DallasTemperature.h>

#define DS18B20  5

OneWire oneWire(DS18B20);
DallasTemperature Sensor (&oneWire);

float leitura;

void setup(){
  Serial.begin(115200);

  Sensor.begin();

}

void loop(){

  Sensor.requestTemperatures();

  leitura = Sensor.getTempCByIndex(0);

  Serial.print(leitura);
  Serial.println("°C");
  Serial.println("---------------------------------");
}

