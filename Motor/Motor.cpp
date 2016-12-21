/*
Corresponding file to define stuff in Motor .h file.
*/

#include "Arduino.h"
#include "Motor.h"

//constructor
Motor::Motor(int pin) {
	pinMode(pin, OUTPUT);
	_pin = pin;
	_power = 0;
}

void Motor::setPower(int power) {
	analogWrite(_pin, power);
	_power = power;
}

int Motor::getPower() {
	return _power;
}

void Motor::stop() {
	analogWrite(_pin, 0);
}