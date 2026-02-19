#include <Arduino.h>

#define TRIG_PIN 9
#define ECHO_PIN 10

long duration;
float distance;

void setup() {
    Serial.begin(9600);
    pinMode(TRIG_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);

    Serial.println("Ultrasonic Sensor Initialized");
}

void loop() {
}
