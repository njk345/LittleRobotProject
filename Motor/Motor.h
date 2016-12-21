#ifndef Motor_h
#define Motor_h

#include "Arduino.h"

class Motor {
	public:
		Motor(int pin);
		void setPower(int pow);
		int getPower();
		void stop();
	private:
		int _pin;
		int _power;
};

#endif
