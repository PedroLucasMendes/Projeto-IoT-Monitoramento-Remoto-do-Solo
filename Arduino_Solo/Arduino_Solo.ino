// Example testing sketch for various DHT humidity/temperature sensors
// Written by ladyada, public domain
// REQUIRES the following Arduino libraries:
// - DHT Sensor Library: https://github.com/adafruit/DHT-sensor-library
// - Adafruit Unified Sensor Lib: https://github.com/adafruit/Adafruit_Sensor
// - LoRa RadioHead Lib: https://github.com/hallard/RadioHead

//Include library sensor and LoRa
#include "DHT.h"
#include <SPI.h>
#include <RH_RF95.h>
#include "string.h"

//Defining digital ports for LoRa 
#define RFM95_CS 10
#define RFM95_RST 9
#define RFM95_INT 2
//Defining a frequency
#define RF95_FREQ 915.0
//Setting digital ports 
RH_RF95 rf95(RFM95_CS, RFM95_INT);


#define DHTPIN 5 // Digital pin connected to the DHT sensor
#define DHTTYPE DHT22 // DHT 22 (AM2302), AM2321
#define humidity_solo_analog A0
// Connect pin 1 (on the left) of the sensor to 3.3V
// Connect pin 2 of the sensor to whatever your DHTPIN is

DHT dht(DHTPIN, DHTTYPE);
int value_analog;

void setup() {
  //LoRa
  pinMode(RFM95_RST, OUTPUT);
  digitalWrite(RFM95_RST, HIGH);
  
  while (!Serial);
  Serial.begin(9600);
  delay(100);
  Serial.println("Arduino LoRa!");

  // manual reset
  digitalWrite(RFM95_RST, LOW);
  delay(10);
  digitalWrite(RFM95_RST, HIGH);
  delay(10);

  while (!rf95.init()) {
    Serial.println("Falha na inicialização do rádio LoRa");
    while (1);
  }
  Serial.println("Iniciação do LoRa!");
  
  if (!rf95.setFrequency(RF95_FREQ)) {
    Serial.println("setFrequency failed");
    while (1);
  }

  Serial.print("Definida a Frequencia para: "); Serial.println(RF95_FREQ);

  //Setting configs initials
  //BW: 125
  //CodeRate: 4/8
  //SF: 12
  rf95.setModemConfig(RH_RF95::Bw125Cr45Sf128);
  rf95.setTxPower(23, false);
  
  //Sensor
  pinMode(humidity_solo_analog, INPUT);
  dht.begin();
  Serial.begin(9600);
  Serial.println(F("DHT test!"));
}

  char buffer[100];
  char string_Humidity_Solo[15] = {"HUS"};
  char string_Humidity_Air[15] = {"HUA"};
  char stringTemperature[15] = {"TEM"};
  
void loop() {
  //Getting data from sensors
  // Wait a few seconds between measurements.
  delay(2000);
  // Reading temperature or humidity takes about 250 milliseconds!
  // Sensor readings may also be up to 2 seconds ’old’ (its a very slow sensor)
  float humidity_air = dht.readHumidity();
  // Read temperature as Celsius (the default)
  float temperature_air = dht.readTemperature();
  // Read analogic value that port A0
  value_analog = analogRead(humidity_solo_analog);
  // Check if any reads failed and exit early (to try again).
  if (isnan(humidity_air) || isnan(temperature_air)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }
  //sensor data printing
  Serial.println("");
  Serial.print(F("Humidity: "));
  Serial.print(humidity_air);
  Serial.println("%");
  Serial.print(F("Temperature: "));
  Serial.print(temperature_air);
  Serial.println(F("oC "));
  Serial.print(F("value_analog_Humidity_Solo: "));
  Serial.println(value_analog);
  
  
  //changing integer data to char
  itoa(value_analog, string_Humidity_Solo+3, 10);
  itoa(humidity_air, string_Humidity_Air+3, 10);
  itoa(temperature_air, stringTemperature+3, 10);
  
  //Adding data to buffer
  strcat(buffer,string_Humidity_Solo);
  strcat(buffer,";");
  strcat(buffer,string_Humidity_Air);
  strcat(buffer,";");
  strcat(buffer,stringTemperature);
  strcat(buffer,";");
  Serial.println(buffer);
  
  buffer[99] = 0;
  Serial.println("Sending..."); delay(10);
  rf95.send((uint8_t *)buffer, 20);
  
  Serial.println("Waiting for package completion..."); delay(10);
  rf95.waitPacketSent();
  //Clear of buffer
  memset(buffer, 0, sizeof(buffer));

  
}
