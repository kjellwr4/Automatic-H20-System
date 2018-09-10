# Automatic-H20-System
This repository contains code and resources for building an automatic watering system with an Arduino Uno, water pump, soil moisture meter, and relay. 
# Materials
- Arduino Uno
- [Gikfun's Automatic Watering System Manager with Mini Water Pump](http://www.gikfun.com/electronic-diy-kits-c-7/automatic-watering-system-manager-with-mini-water-pump-diy-kit-p-800.html)
- Breadboard (170 Tie-Ins)
# Step 1: Wire Soil Moisture Sensor for Test
![Wiring for Soil Moisture Sensor Test](https://github.com/kjellwr4/Automatic-H20-System/blob/master/Soil_Moisture_Test.png?raw=true =400x)
# Step 2: Test Soil Moisture Sensor
1. Download the [Soil_Moisture_Test.ino sketch](https://github.com/kjellwr4/Automatic-H20-System/blob/master/Soil_Moisture_Test.ino =400x).
2. Open the Arduino IDE and choose the correct board and port.
3. Compile and upload the sketch.
4. Open the serial monitor.
5. Place the soil moisture sensor in soil or cup of water and observe the sensor readings.
6. Adjust the potentiometer on the soil moisture meter.
7. Change the analog values on Line 28 in the sketch to more accurately represent 0-100%. Write down the newly mapped values.
8. Compile, upload, and test again.
# Step 3: Build the Automatic Water System
![Automatic Water System](https://github.com/kjellwr4/Automatic-H20-System/blob/master/Gikfun_Auto_H20_System.png)
# Step 4:
1. Replace Line 30 with the values....
