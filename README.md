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

# Sample Images

![heart](https://github.com/anshulgurjar53/SmartVitals-Health_Monitoring_System/assets/90499262/d7d34fe7-062f-469c-818c-5c9b4afb96e2)


# Future Scope

In my ongoing efforts to enhance the SmartVitals project, I've taken a significant step towards empowering patients to monitor their health more comprehensively by integrating an ECG sensor. The addition of an ECG sensor enables individuals to observe their vital signs at home or under everyday circumstances. While interpreting ECG readings might be challenging for non-medical individuals initially, the incorporation of this feature holds tremendous potential for early detection and alerting patients to potential health issues promptly. Through the utilization of the AD8232 ECG sensor, I've obtained promising results, laying the groundwork for future developments. I welcome and appreciate any contributions towards furthering this project, especially in refining the integration of ECG monitoring and exploring additional functionalities to enhance the overall healthcare monitoring experience.



# Contributing:
We welcome contributions from the community! Whether you're a developer, designer, or healthcare professional, your expertise can help enhance SmartVitals.

