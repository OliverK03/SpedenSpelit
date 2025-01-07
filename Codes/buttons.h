#include <Arduino.h>

extern volatile int lastPressedButton; //Halutaan volatile, jos käsitellään keskeytyksiä (PCICR)
const int pin2 = 2; //kytketyt pinnit 2-6
const int pin3 = 3;
const int pin4 = 4;
const int pin5 = 5;
const int pin6 = 6;

void initButtonsAndButtonInterrrupts(); /* buttons- moduulin funktio, mitä käytetään lopullisessa ohjelmassa. 
rekisteröidään, mitä nappia on painettu ja tallenetaan se muuttujaan. Keskeytykset mukana. */

