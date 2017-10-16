#ifndef LedCube_h
#define LedCube_h

#include "Arduino.h"


class LedCube{
	public:
		LedCube(int minPin,int maxPin);
		void clear();
		void pillar(int pin);
		void level(int pin);
		void levelOff(int pin);
		void levelOnly();
		void pillarOnly();
	private:
		void initPins();
		int _pillars[3][3];
		int _levels[3];

}

#endif
