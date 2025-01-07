#include "leds.h"

//Kirjoittanut Nella Pökkä, kirjoitettu 16.11.2024. 

//julistetaan muuttujat arrayihin, pinnit A2-A5
const byte ledPins[] = { A2, A3, A4, A5 };

//julistetaan funktio, laitetaan kaikki edelliset pinnit OUTPUT- tilaan, jos ovat nollassa
void initializeLeds() {
  for (byte i = 0; i < 4; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}
//julistetaan funktio, sammuttaa edelliset LEDit ja sytyttää uuden LEDin. (riippuen muuttujasta byte ledNumber)
void setLed(byte ledNumber) {
  clearAllLeds();
  digitalWrite(ledPins[ledNumber], HIGH);
}
//Julistaa funktion, sammuttaa ledit
void clearAllLeds() {
  for (byte i = 0; i < 4; i++) {
    digitalWrite(ledPins[i], LOW);
  }
}
//julistaa funktio, sytyttää kaikki LEDit päälle.
void setAllLeds() {
  for (byte i = 0; i < 4; i++) {
    digitalWrite(ledPins[i], HIGH);
  }
}
//ilotulitus show LEDeillä, sytyttää LEDejä vuorotellen. 
void show2(int rounds) {

    for (int i = 0; i < rounds; i++) 
    {                                
      int delayTime = 100 - (i * 30);  // ajastin, joka nopeuttaa led-kierroksia
      if (delayTime < 50) delayTime = 50;

     clearAllLeds();

      digitalWrite(ledPins[1], HIGH);
      delay(delayTime);

      digitalWrite(ledPins[2], HIGH);
      delay(delayTime);

      digitalWrite(ledPins[3], HIGH);
      delay(delayTime);

      digitalWrite(ledPins[0], HIGH);
      delay(delayTime);

      clearAllLeds();

      digitalWrite(ledPins[0], HIGH);
      delay(delayTime);

      digitalWrite(ledPins[3], HIGH);
      delay(delayTime);

      digitalWrite(ledPins[2], HIGH);
      delay(delayTime);

      digitalWrite(ledPins[1], HIGH);
      delay(delayTime);
      //sammuttaa ledit lopuksi
      clearAllLeds();
    }
  }


