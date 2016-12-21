#ifndef Ultrasonic_h
#define Ultrasonic_h

#include "Arduino.h"

class Ultrasonic {
	public:
		Ultrasonic(int trigPin, int echoPin);
		long getDistCM();
	private:
		int _trigPin;
		int _echoPin;
};

#endif