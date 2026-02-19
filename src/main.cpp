#include <Arduino.h>

/**
 * @file main.cpp
 * @brief Embedded Distance Measurement using Ultrasonic Sensor
 * @author Piyush
 * @date 2026-02-19
 *
 * @details
 * Measures distance using the HC-SR04 ultrasonic sensor and
 * displays the output on the Serial Monitor.
 */

// Define TRIG and ECHO pins
#define TRIG_PIN 9
#define ECHO_PIN 10

// Variables for measurement
long duration;
float distance;

/**
 * @brief Initializes serial communication and sensor pins.
 */
void setup() {
    Serial.begin(9600);
    pinMode(TRIG_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);

    Serial.println("Ultrasonic Distance Measurement Initialized");
}

/**
 * @brief Measures distance and prints it to Serial Monitor.
 */
void loop() {

    digitalWrite(TRIG_PIN, LOW);
    delayMicroseconds(2);

    digitalWrite(TRIG_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN, LOW);

    duration = pulseIn(ECHO_PIN, HIGH);
    distance = (duration * 0.0343) / 2;

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");

    delay(500);
}
