#ifndef Led_h
#define Led_h

#include "Arduino.h"

class Led{
	public:
		Led(int pin);
		void blink(int time);
		void on();
		void off();
		void setIntensity(float percentage);
		bool isPwm();

	private:
		int _pwms[6] = { 3, 5, 6, 9, 10, 11 }; 
		int _pin;
		bool _pwm;
		bool checkPwm();
};


#endif
