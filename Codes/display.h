#ifndef DISPLAY_H
#define DISPLAY_H
#include <Arduino.h>

//pinnit
const int dataPin = 8;
const int latchPin = 9;
const int clockPin = 10;

//gamelogic muuttujia
extern volatile int pisteet;
extern volatile bool peliKaynnissa;

//Numerot muodossa, missä tietokone ymmärtää ne (binääri)
const byte digitPatterns[] = {
  B00111111, // 0
  B00000110, // 1
  B01011011, // 2
  B01001111, // 3
  B01100110, // 4
  B01101101, // 5
  B01111101, // 6
  B00000111, // 7
  B01111111, // 8
  B01101111  // 9
};

//display- moduulin funktiot
void initializeDisplay();
void displayNumber(int number);
void shiftOutData(byte data3, byte data2, byte data1);

#endif // DISPLAY_H
