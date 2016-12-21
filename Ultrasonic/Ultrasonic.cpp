#include "Arduino.h"
#include "Ultrasonic.h"

Ultrasonic::Ultrasonic(int trigPin, int echoPin) {
	pinMode(trigPin, OUTPUT);
	pinMode(echoPin, INPUT);
	_trigPin = trigPin;
	_echoPin = echoPin;
}

long Ultrasonic::getDistCM() {
	digitalWrite(_trigPin, LOW);
	delayMicroseconds(2);
	digitalWrite(_trigPin, LOW);
	delayMicroseconds(10);
	digitalWrite(_trigPin, LOW);

	long duration = pulseIn(_echoPin, HIGH);
	long distance = (duration / 2.0) / 29.1;
	return distance;
}