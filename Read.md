# Factory Defective Product Detection System (IoT Prototype)

## 📌 Overview
This project demonstrates a **low-cost prototype for factory quality control**.  
Using an **ultrasonic sensor, proximity sensor, and soil moisture sensor**, the system detects defective products on a conveyor line.  
It provides the foundation for an **automated rejection system** in manufacturing plants.

---

## ✨ Features
- 📡 **Ultrasonic Sensor (HC-SR04):** Detects product presence.  
- 🧲 **Proximity Sensor:** Detects metallic components in products.  
- 💧 **Soil Moisture Sensor:** Detects unwanted moisture/damage.  
- ⚙️ Can be extended to control a **servo motor / actuator** for automatic rejection.  
- 🏭 Ideal as a **demo for smart factories and Industry 4.0.**

---

## 🛠️ Components
- Arduino Uno/Nano  
- HC-SR04 Ultrasonic Sensor  
- Proximity Sensor (metal detection)  
- Soil Moisture Sensor  
- (Optional) Servo motor or relay module for rejection mechanism  

---

## ⚙️ Working Principle
1. **Object Detection:**  
   The ultrasonic sensor measures distance. If a product is present within **15 cm**, inspection begins.  

2. **Metal Check:**  
   The proximity sensor checks if required metallic parts are present.  

3. **Moisture Check:**  
   The soil moisture sensor detects unwanted moisture (damaged or wet product).  

4. **Decision Logic:**  
   - ✅ Product passes → No defect.  
   - ❌ Product fails → Flag as defective (could trigger a servo to remove it).  

---

## 📚 Applications
- Factory conveyor belt **defect detection**.  
- **Quality control** in manufacturing.  
- **Smart Industry / Industry 4.0 automation.**  
- **Educational IoT projects** for embedded systems.  

---

## 🎓 Portfolio Relevance
This project demonstrates:
- Integration of **multiple sensors**.  
- **Real-time defect detection** logic.  
- Application of IoT in **industrial automation**.  
- Suitable for **NUS/NTU portfolio** as an **applied engineering project with social/economic value**.

---

## ⚠️ Disclaimer
This is a **prototype demonstration**.  
In real-world factories, industrial-grade sensors and actuators would be required.
