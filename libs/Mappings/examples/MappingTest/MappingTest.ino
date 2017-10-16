#include<Mappings.h>

Mappings m;

void setup(){
  Serial.begin(9600);
}

void loop(){
  Serial.println(halfen(500));
}
