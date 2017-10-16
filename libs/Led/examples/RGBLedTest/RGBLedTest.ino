#include "LedRGB.h"

LedRGB l(9,10,11);

void setup(){
  Serial.begin(9600);

}

void loop(){
  //l.blink(1000);
  l.setColor(100,255,200);
  l.blink(2000);
}
