#include <Arduino.h>

//LEDmoduulin funktiot, joita käytetään gamelogicissa
void initializeLeds();
void setLed(byte ledNumber);
void clearAllLeds();
void setAllLeds();
void show2(int); //int = kuinka monta kertaa halutaan pyörittää ilotulitusta
