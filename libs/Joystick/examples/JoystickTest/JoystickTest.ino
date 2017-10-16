#include<Joystick.h>

int xPin = 0;
int yPin = 1;
int buttonPin = 2;
Joystick j(xPin, yPin,buttonPin);
void setup(){
  Serial.begin(9600);
}

void loop () {
  int x = j.getX();
  x = map(x,0,1024,0,255);
  delay(100);
  int y = j.getY();
  y = map(y,0,1024,0,255);
  delay(100);
  int buttonState = j.buttonState();
    
  Serial.print(x);
  Serial.print(":");  
  Serial.print(y);
  Serial.print(":");  
  Serial.print(buttonState);  
  Serial.println();
}


