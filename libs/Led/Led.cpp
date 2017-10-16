#include "Led.h"

Led::Led(int pin){
	_pin = pin;
	_pwm = checkPwm();
	pinMode(_pin,OUTPUT);
}


void Led::on(){
	digitalWrite(_pin,HIGH);
}

void Led::off(){
	digitalWrite(_pin,LOW);
}

bool Led::isPwm(){
	return _pwm;
}

void Led::blink(int time){
	on();
	delay(time/2);
	off();
	delay(time/2);
}

void Led::setIntensity(float percentage){
	
}

bool Led::checkPwm(){
	for(int i = 0; i<6; i++){
		if(_pin == _pwms[i]){
			return true;
		}
	}
	return false;

}
