#include "display.h"

//Moduulin on kirjoittanut Nella Soudunsaari, viimeisimmät muutokset 27.11.2024. Prototyyppi valmiina ensimmäisellä viikolla eli 18.11.2024

//julistetaan muuttujat
volatile int pisteet = 0;
volatile bool peliKaynnissa = false;

//julistetaan funktio ja asetetaan pinnit OUTPUT- tilaan
void initializeDisplay() {
  pinMode(dataPin, OUTPUT);
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
}
//Jakaa annetun luvun kolmeen muuttujaan: lopputulokseksi saadaan ykköset, kymmenet ja sadat. 
//Jos numero on 456, digit1 on 4, digit2 on 5 ja digit3 on 6
void displayNumber(int number) {
  int digit1 = number / 100;
  int digit2 = (number / 10) % 10;
  int digit3 = number % 10;
//Lähettää näiden numeroiden kuvion (digitPatterns) => funktiolle shiftOutData
  shiftOutData(digitPatterns[digit3], digitPatterns[digit2], digitPatterns[digit1]);
}
//Julistetaan funktio, käsitellään muuttujia data1-3
void shiftOutData(byte data3, byte data2, byte data1) { 
  digitalWrite(latchPin, LOW); //asettaa LatchPinnin LOW- tilaan

  shiftOut(dataPin, clockPin, MSBFIRST, data3); //Lähettää kolme numeroa siirtorekisteriin käyttämällä funktiota (data1, data2,data3)
  shiftOut(dataPin, clockPin, MSBFIRST, data2);
  shiftOut(dataPin, clockPin, MSBFIRST, data1);

  digitalWrite(latchPin, HIGH); //asettaa LatchPinnin HIGH- tilaan (lukitsee datan)
}
