#include <Wire.h>
#include "MAX30100_PulseOximeter.h"
#include <ESP8266WiFi.h>
#include <ThingSpeak.h>
#include<WiFiClient.h>
#include <Adafruit_MLX90614.h>

#include "Wire.h"

Adafruit_MLX90614 mlx = Adafruit_MLX90614();


WiFiClient client;

 
#define REPORTING_PERIOD_MS 1000
#define SDA_PIN 4  // D3
#define SCL_PIN 5  // D4
 
char ssid[] = "Home";                                     // Your WiFi credentials.
char pass[] = "Manthra420";
 
// Connections : SCL PIN - D1 , SDA PIN - D2 , INT PIN - D0
PulseOximeter pox;
 
float BPM, SpO2;
float temperature;
uint32_t tsLastReport = 0;

long myChannelNumber = 1679442;
const char myWriteAPIKey[] = "X19P6AADKO9PCBZX";
 
 
void onBeatDetected()
{
    Serial.println("Beat Detected!");
}
 
void setup()
{
    Serial.begin(115200);
    
    pinMode(16, OUTPUT);
    //Blynk.begin(auth, ssid, pass);
    Wire.begin(SDA_PIN, SCL_PIN);
    mlx.begin();
 
    Serial.print("Initializing Pulse Oximeter..");
 
    if (!pox.begin())
    {
         Serial.println("FAILED");
         for(;;);
    }
    else
    {
         Serial.println("SUCCESS");
         pox.setOnBeatDetectedCallback(onBeatDetected);
    }
    if (!mlx.begin()) {
    Serial.println("Could not find a valid MLX90614 sensor, check wiring!");
    while (1);
 }
    ThingSpeak.begin(client);
 
    // The default current for the IR LED is 50mA and it could be changed by uncommenting the following line.
     //pox.setIRLedCurrent(MAX30100_LED_CURR_7_6MA);
 
}
 
void loop()
{
    pox.update();
 
    BPM = pox.getHeartRate();
    SpO2 = pox.getSpO2();
    temperature = mlx.readObjectTempF();
     if (millis() - tsLastReport > REPORTING_PERIOD_MS)
    {
        Serial.print("Heart rate:");
        Serial.print(BPM);
        ThingSpeak.writeField(myChannelNumber, 1, BPM, myWriteAPIKey);
        Serial.print(" bpm / SpO2:");
        Serial.print(SpO2);
        ThingSpeak.writeField(myChannelNumber, 2, SpO2, myWriteAPIKey);
        Serial.println(" %");
        Serial.print("Temperature");
        Serial.print(temperature);
        ThingSpeak.writeField(myChannelNumber, 3, temperature, myWriteAPIKey);
 
        tsLastReport = millis();
    }
}
