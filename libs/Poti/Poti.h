#ifndef Poti_h
#define Poti_h

#include "Arduino.h"

class Poti{
	public:
		Poti(int pin);
		int getVal();
		int getOld();
		int getNew();
		int smooth();

	private:
		int _pin;
		int _oldVal;
		int _newVal;

};

#endif
