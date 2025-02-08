WIRELESS TEMPERATURE MONITORING SYSTEM:

        A Wireless temperature monitoring system is used to record and analyze the data of temperature of surrounding environment and provides the data to the user. This system is widely used in several industries and platforms all over the country.

By seeing the title we may think that why to monitor temperature, But we really don’t know that there are many benefits of it. Let us see..

Why To Monitor Temperature?

Temperature is the key factor in Manufacturing process,Recording weather...etc.
    • In Various Industries ,Temperature is required to maintain product quality and reduce defects and associated costs.
    • High temperature or Low temperature may affect the chemical composition of products. So regular temperature monitoring is required.
    • There are many reasons,so many companies use temperature in Real time.

Where Do We Use?

    • Food Storage – By measuring the temperature we can know the food products quality.
    • Greenhouses – To measure the temperature of greenhouse gases.
    • Cold Chain Logistics -To measure the temperature-sensitive goods.
    • Vaccine Fridges -Low temperature is Required for vaccines.
    • Refinary or Petrolium -certain temperatures are required for extraction of petrolium.
    • Pharmaceuticals – Temperatures are required to make Medicines. 

Real Time Monitoring Alerts:

    • Sensors: Collects Real Time data from area like storage facilities,manufacturing plants and data centers etc.
    • Cloud Connection: Data is sent to Cloud Platforms for storage.
    • Alerts: Alerts are generated if temperature goes high or Out of Range and allows Immediate Corrections.

Let us set up a Temperature Monitoring System now..

    • It requires a receiver and transmitter (Sensors and LCD display are used as receivers and transmitters).
    • The basic principle of working is voltage across diode terminals.As if voltage increases then temperature also rises.

Components:

    • Arduino Board
    • Temperature Sensor-TMP36
    • Red Led
    • Resistors
    • Bluetooth Module
    • LCD display
    • Breadboard

Procedure:
    1. Connect temperature sensor,Bluetooth Module,LCD and LED’s to Arduino board.
    2. TMP36:
    • Connect VCC to 5v and Ground to GND pin in Arduino board.
    • Connect Vout to Analog pin 3.
      3.LCD Display:
    • Connect VCC to 5v and ground to GND pin.
    • Connect SDA to SDA pin or A4 and SCL to SCL or A5 pins respectively.
      4.LED:
    • Connect LED 1 to digital pin 4 in Arduino.
    • Connect LED 2 to Digital pin 5 in Arduino.
    • Connect LED 3 to Digital pin 6 in Arduino.
      5.Write the Arduino Uno code in Arduino IDE platform .
       
      6.Upload the code using USB cable. Select the correct port and Board in the Arduino IDE and   
          click “upload” button to upload the code.
       
      7.You will observe the temperature in LCD display and if the temperature is high then 3 LED’s     
         will glow and if if the temperature is low only one LED will glow and if the temperature is 
          moderate then 2 LED’s will glow.
