#include "Led.h"

Led l(9);

void setup(){
  Serial.begin(9600);

}

void loop(){
  //l.blink(1000);
  l.on();
  if(l.isPwm()){
    Serial.println("pwm");  
  }else{
    Serial.println("!pwm");  
  }
}
