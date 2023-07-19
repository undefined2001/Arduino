#include "AdvancePin.h"


Pin::Pin(unsigned int p):pin(p){};

void Pin::begin(String mode){
  if(mode == IN){
    pinMode(this->pin, INPUT);
  }else if(mode == IN_PULL_UP){
    pinMode(this->pin, INPUT_PULLUP);
  }else if(mode == IN_PULL_DOWN){
    pinMode(this->pin, INPUT);
    digitalWrite(this->pin, LOW);
  }else{
    pinMode(this->pin, OUTPUT);
  }
}

void Pin::high(){
  digitalWrite(this->pin, HIGH);
}

void Pin::low(){
  digitalWrite(this->pin, LOW);
}

bool Pin::is_high(){
  return (digitalRead(this->pin))?true:false;
}

bool Pin::is_low(){
  return (!digitalRead(this->pin))?true:false;
}
