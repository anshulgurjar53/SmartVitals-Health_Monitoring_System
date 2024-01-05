# SmartVitals-Health_Monitoring_System
SmartVitals is an health monitoring system designed to regularly track and report essential health vitals for patients. This project focuses on providing a comprehensive solution for monitoring heart rate, blood oxygen saturation (SpO2), body temperature, and room conditions. 

# SmartVitals
SmartVitals is an  health monitoring system designed to regularly track and report essential health vitals for patients. This project focuses on providing a comprehensive solution for monitoring heart rate, blood oxygen saturation (SpO2), body temperature, and room conditions. SmartVitals empowers caregivers, medical professionals, and patients themselves with real-time data to ensure timely intervention and personalized healthcare.

# Features:
- **Multi-Vital Monitoring**: SmartVitals supports continuous monitoring of key health indicators, including heart rate, SpO2 levels, and body temperature.

- **Room Conditions Monitoring**: In addition to individual vitals, the system also tracks room conditions such as temperature, ensuring a comfortable and healthy environment for the patient.

- **Real-time Alerts**: Receive instant notifications and alerts for abnormal vital readings, enabling timely medical attention and intervention.

- **User-friendly Interface**: The web-based interface provides an intuitive and user-friendly experience, making it accessible for caregivers, medical professionals, and patients.

- **Data Logging and Analysis**: SmartVitals logs and stores historical data, allowing for trend analysis and long-term health tracking.

# Hardware Requirements:
- **Microcontroller/Processor**: Arduino or ESP8266/ESP32-based boards.
- **Sensors**: MAX30100 for heartRate and SpO2 sensing, MLX90614-IR temperature sensor, and environmental sensors for room conditions likeMQ35 for gas sensing.
- **Communication**: WiFi  for data transmission to ThingSpeak.
- **Getting Started:**
- **Install required libraries:-**

```bash
 #include <Wire.h>

 #include "MAX30100_PulseOximeter.h"

 #include <ESP8266WiFi.h>

 #include <ThingSpeak.h>

 #include<WiFiClient.h>

 #include <Adafruit_MLX90614.h>

 #include "Wire.h"
```

# Contributing:
We welcome contributions from the community! Whether you're a developer, designer, or healthcare professional, your expertise can help enhance SmartVitals.

