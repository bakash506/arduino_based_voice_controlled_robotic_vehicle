# Arduino Based Voice Controlled Robot Vehicle

## Introduction

This project features a voice-controlled robot vehicle powered by an Arduino microcontroller and Bluetooth technology. The robot can be controlled through voice commands or buttons in an Android application. The system utilizes Bluetooth communication to relay commands from the app to the robot, which then drives DC servo motors based on the received commands.

![Voice Controlled Robot Vehicle](https://github.com/bakash506/arduino_based_voice_controlled_robotic_vehicle/blob/main/images/circuit.png)

## Overview

- **Objective:** Design and implement an Arduino-based voice-controlled robot.
- **Technologies Involved:**
  - Data Communication
  - Embedded Systems
  - VLSI Design
- **Communication Method:** Real-time data transfer via Bluetooth.
- **Software Used:** Arduino IDE
- **Key Hardware Components:**
  - **L298D Motor Driver**: Controls the DC motors.
  - **HC-05 Bluetooth Module**: Handles Bluetooth communication.
  - **Arduino UNO**: Acts as the microcontroller to process commands and control the motors.

## Components

![Arduino UNO](https://github.com/bakash506/arduino_based_voice_controlled_robotic_vehicle/blob/main/images/arduino.png)

- **Arduino UNO**: Microcontroller board that processes commands and controls the robot's movements.
- **L298D Motor Driver**: IC that drives the DC motors based on the signals from the Arduino.
- **HC-05 Bluetooth Module**: Module for wireless communication between the Android app and the Arduino.

## How It Works

1. **Voice Command Recognition:**
   - The Android smartphone's microphone captures the user's voice commands.
   - The voice is converted to text using Android’s speech recognition software.

   ![Android App Interface](https://github.com/bakash506/arduino_based_voice_controlled_robotic_vehicle/blob/main/images/voice.png)

2. **Data Transmission:**
   - The Android app transmits commands via Bluetooth to the HC-05 module on the robot.
   - The Bluetooth RF transmitter communicates within a range of approximately 100 meters.

   ![Bluetooth Communication](https://github.com/bakash506/arduino_based_voice_controlled_robotic_vehicle/blob/main/images/bluetooth.png)

3. **Microcontroller Processing:**
   - The Arduino UNO receives and decodes the commands from the HC-05 module.
   - The decoded commands are used to control the DC motors through the L298D Motor Driver.

   ![L298D Motor Driver](https://github.com/bakash506/arduino_based_voice_controlled_robotic_vehicle/blob/main/images/motor.png)

## Results and Discussion

The project leverages advancements in speech recognition technology, which integrates linguistics, computer science, and electrical engineering. Recent developments in deep learning and big data have significantly enhanced the accuracy and functionality of speech recognition systems. This project demonstrates how these technologies can be applied in real-time robotics, showing a practical use of modern AI advancements.

![Robot in Action](https://github.com/bakash506/arduino_based_voice_controlled_robotic_vehicle/blob/main/images/working%20model.jpg)
