#ifndef ADVANCEPIN_H
#define ADVANCEPIN_H
#include<Arduino.h>

#define IN "IN"
#define OUT "OUT"
#define IN_PULL_UP "IPU"
#define IN_PULL_DOWN "IPD"


class Pin{
 unsigned int pin;
 public:
 Pin(unsigned int);
 void begin(String mode = OUT);
 void high();
 void low();
 bool is_high();
 bool is_low();
 };










#endif
