#include "buttons.h"

/*Buttons-moduuli, koodin kirjoittajana Aliisa Alalammi. Ensimmäinen versio valmiina 16.11.2024, lisätty 
värähtelyn estot 26.11.2024 bugien takia. */

//julistetaan muuttujat
volatile int lastPressedButton = -1; // resetoi
unsigned long lastDebounceTime = 0; // värähtely ajastin
const unsigned long debounceDelay = 225; //värähtely delay
volatile unsigned long lastDebounceTimePin6 = 0; // värähtely ajastin lopuille

void initButtonsAndButtonInterrrupts() { //ohjeen mukaan halutaan käyttää keskeytyksiä PCICR avulla. Pinnejä on kuusi kpl, asetetaan keskeytykset.
   PCICR |= (1 << PCIE2); // Enable PCINT18-23 (pinnit 2-6)

     PCMSK2 |= (1 << PCINT18); // keskeytys pinni 2 (PCINT18)
     PCMSK2 |= (1 << PCINT19); // keskeytys pinni 3 (PCINT19)
     PCMSK2 |= (1 << PCINT20); // keskeytys pinni 4 (PCINT20)
     PCMSK2 |= (1 << PCINT21); // keskeytys pinni 5 (PCINT21)
     PCMSK2 |= (1 << PCINT22); // keskeytys pinni 6 (PCINT22)
     
       for (int pin = pin2; pin <= pin5; pin++) { //Halutaan muokata näiden pinnien tilaa
         pinMode(pin, INPUT_PULLUP); // Asetetaan pinnien tila INPUT_PULLUP
  }
}

ISR(PCINT2_vect) { // jos keskeytys tapahtuu =>
  unsigned long currentTime = millis(); // haetaan aika

  // laitetaan starternapin pinni erikseen, ettei mene sekaisin pelin kanssa
  if (digitalRead(pin6) == LOW) { //JOS PAINETAAN =>
    if (currentTime - lastDebounceTimePin6 > debounceDelay) {  //laskee ajan, kuinka kauan on viimeisimmästä napin painalluksesta. debounceDelay tarkistaa ylittääkö aika asetetun muuttujan arvoa.
      lastPressedButton = 6; //starter napin arvo, muilla napeilla on omansa.
      lastDebounceTimePin6 = currentTime; // päivittää viimeisimmän värähtely ajan
      Serial.println("starter on painettu");
    }
  } else {
    // Handle other buttons with debounce logic
    if (currentTime - lastDebounceTime > debounceDelay) { //kirjoitetaan tämä vain kerran muille napeille
      if (digitalRead(pin2) == LOW) {
        lastPressedButton = 1; 
        lastDebounceTime = currentTime; 
        //Serial.println("nappi1 on painettu");
      } else if (digitalRead(pin3) == LOW) {
        lastPressedButton = 2; 
        lastDebounceTime = currentTime; 
        //Serial.println("nappi2 on painettu");
      } else if (digitalRead(pin4) == LOW) {
        lastPressedButton = 3; 
        lastDebounceTime = currentTime; 
        //Serial.println("nappi3 on painettu");
      } else if (digitalRead(pin5) == LOW) {
        lastPressedButton = 0; 
        lastDebounceTime = currentTime; 
        //Serial.println("nappi4 on painettu");
      }
    }
  }
}