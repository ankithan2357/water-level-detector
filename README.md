💧 Water Level Detector

An Arduino-based water level monitoring system designed to detect and monitor water levels using **HC-SR04 ultrasonic and capacitive water level sensors**.

📌 Project Overview

The system uses an **Arduino Uno** to monitor the water level in a container.

An HC-SR04 ultrasonic sensor measures the distance between the sensor and the water surface, while capacitive water level sensors can be used to detect different water levels.

The system provides an alert through a buzzer when the water reaches a defined level.

 🎯 Objectives

* Monitor water levels automatically
* Measure water level using an ultrasonic sensor
* Detect water levels using capacitive sensors
* Provide an alert when the water reaches a specified level
* Demonstrate sensor interfacing with Arduino

 🛠️ Technologies Used

* **Arduino Uno**
* **HC-SR04 Ultrasonic Sensor**
* **Capacitive Water Level Sensor**
* **Buzzer**
* **Embedded C**
* **PWM**
* **GPIO**

 🔧 Hardware Components

| Component                     | Purpose                                |
| ----------------------------- | -------------------------------------- |
| Arduino Uno                   | Main microcontroller                   |
| HC-SR04                       | Measures distance to the water surface |
| Capacitive Water Level Sensor | Detects water level                    |
| Buzzer                        | Provides an alert                      |
| Connecting Wires              | Circuit connections                    |

 ⚙️ Working Principle

The HC-SR04 ultrasonic sensor sends an ultrasonic pulse toward the water surface.

The reflected signal is received by the sensor, and the Arduino calculates the distance to the water surface.

The capacitive water level sensor can additionally detect the presence of water at specific levels.

When the water reaches the defined threshold, the Arduino activates the buzzer.

 System Flow

        Water Level
             ↓
   ┌───────────────────┐
   │                   │
   │  HC-SR04 Sensor   │
   │        +          │
   │ Capacitive Sensor │
   │                   │
   └─────────┬─────────┘
             ↓
        Arduino Uno
             ↓
      Level Processing
             ↓
          Buzzer
             ↓
       Alert / Warning


 📊 Parameters Monitored

* Distance to water surface
* Water level
* Water-level threshold

💻 Software

* Arduino IDE
* Embedded C
* Arduino Serial Monitor

 🚀 Future Improvements

* Add an LCD/OLED display
* Add multiple water-level alerts
* Add IoT connectivity for remote monitoring
* Send notifications when the water reaches critical levels
* Add automatic pump control

 👩‍💻 Skills Demonstrated

Embedded Systems 
Arduino 
Embedded C 
Sensor Interfacing 
HC-SR04 
Capacitive Sensing 
GPIO 
PWM 
Automation
