#ifndef Joystick_h
#define Joystick_h

class Joystick{
	public:
		Joystick(int xPin, int yPin);
		Joystick(int xPin, int yPin, int bPin);
		int getX();
		int getY();
		int buttonState();

	private:
		int _xPin;
		int _yPin;
		int _bPin;
};


#endif
