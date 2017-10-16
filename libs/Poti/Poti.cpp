#include "Poti.h"

Poti::Poti(int pin){
	_pin = pin;
	_newVal=0;
	_oldVal=0;
}

int Poti::getVal(){
	_oldVal = _newVal;
	_newVal = analogRead(_pin);
	return _newVal;
}

int Poti::getOld(){
	return _oldVal;
}

int Poti::getNew(){
	return _newVal;
}

int Poti::smooth(){
	int smooth;
	smooth = 0.1*_oldVal+0.9*_newVal;
	return smooth;
}
