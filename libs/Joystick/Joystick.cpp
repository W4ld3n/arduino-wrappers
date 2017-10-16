#include "Arduino.h"
#include "Joystick.h"

Joystick::Joystick(int xPin, int yPin){
	Joystick(xPin,yPin,-1);
}

Joystick::Joystick(int xPin, int yPin,int bPin){
	_xPin = xPin;
	_yPin = yPin;
	_bPin = bPin;
	pinMode(_bPin,INPUT_PULLUP);
}

int Joystick::getX(){
	return analogRead(_xPin);
}

int Joystick::getY(){
	return analogRead(_yPin);
}

int Joystick::buttonState(){
	if(_bPin>=0){
		int value = digitalRead(_bPin);
		if(value==0){
			return 1;
		}
	}
	return 0;
}
