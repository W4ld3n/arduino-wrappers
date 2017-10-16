#include "LedRGB.h"

LedRGB::LedRGB(int rPin, int gPin, int bPin):Led(rPin){
	_rPin = rPin;
	_gPin = gPin;
	_bPin = bPin;
	_r = 100;
	_g = 50;
	_b = 150;

	pinMode(_rPin,OUTPUT);
	pinMode(_gPin,OUTPUT);
	pinMode(_bPin,OUTPUT);

}

void LedRGB::blink(int time){
	on();
	delay(time/2);
	off();
	delay(time/2);
}

void LedRGB::setColor(int r, int g, int b){
	_r = r;
	_g = g;
	_b = b;
}

//Ons
void LedRGB::on(){
	onR();
	onG();
	onB();
}

void LedRGB::onR(){
	analogWrite(_rPin, _r);
}

void LedRGB::onG(){
	analogWrite(_gPin, _g);
}

void LedRGB::onB(){
	analogWrite(_bPin, _b);
}

//Offs
void LedRGB::off(){
	offR();
	offG();
	offB();
}

void LedRGB::offR(){
	analogWrite(_rPin, LOW);
}

void LedRGB::offG(){
	analogWrite(_gPin, LOW);
}

void LedRGB::offB(){
	analogWrite(_bPin, LOW);
}

