#ifndef LedRGB_h
#define LedRGB_h

#include "Arduino.h"
#include "Led.h"
	
class LedRGB : public Led{
	public:
		LedRGB(int rPin, int gPin, int bPin);
		void blink(int time);
		void setColor(int r, int g, int b);
		void on();
		void onR();
		void onG();
		void onB();
		void off();
		void offR();
		void offG();
		void offB();

	private:
		int _rPin;
		int _gPin;
		int _bPin;
		int _r;
		int _g;
		int _b;

};

#endif
