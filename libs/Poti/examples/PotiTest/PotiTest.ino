#include "Poti.h"

Poti p(0);

void setup(){
  Serial.begin(9600);
}

void loop(){
  int val = p.getVal();
  val = p.smooth();
  Serial.println(val);
}
