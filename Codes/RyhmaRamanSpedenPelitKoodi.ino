#include <Arduino.h>
#include "buttons.h" // Painikemoduuli, Aliisa A
#include "leds.h" // Ledimoduuli, Nella P
#include "display.h" // Näyttömoduuli, Nella S
#include "kissa.cpp" //kissa1-moduuli
#include "kissa2.cpp" //kissa2-moduuli
#include <PCM.h> //äänikirjasto

/* GameLogic moduulin kirjoittanut Oliver Kauppi, viiimeiset muutokset oliverilta 
ja muilta ryhmän jäseniltä koodiin 26.11.2024. Koodin toinen versio. 
Muutoksia koodiin tehnyt kaikki ryhmän jäsenet. Koodin kommentoinut Aliisa A. */

//JULISTETAAN MUUTTUJAT
const int startButtonPin = 6; // aloituspainikkeen pinni
bool gameRunning = false; //pelin tila (true = käynnissä)
unsigned long gameStartTime = 0; //pelin aloitusaika
byte currentLed = 0; //tällä hetkellä sytytetty ledi
int consecutiveCorrectPresses = 0; //peräkkäisten oikeuden painallusten määrä
unsigned long ledChangeDelay = 5000; //alustava vaihtelunopeus ledeille
int score = 0; // pisteet

void playSound1() {
  startPlayback(sample1, sizeof(sample1)); //kissaääni oikeisiin painalluksiin 
}

void playSound2() { 
  startPlayback(sample2, sizeof(sample2)); //kissaääni vääriin painalluksiin 
}

void setup() {
  //Aloitetaan koodi ja julistetaan kaikkien moduulien funktiot. 
  Serial.begin(9600);
  initializeLeds(); //ledien alustus
  initButtonsAndButtonInterrrupts(); //Painikkeiden ja keskeytysten alustus
  pinMode(startButtonPin, INPUT_PULLUP); //Aloitusnapin tila
  initializeDisplay(); //näytön alustus
  displayNumber(0); //näytetään aluksi 0 pistettä
}

void loop() {
  //Aloituspainikkeen painallus aloittaa pelin, jos peli ei ole käynnissä.
  if (digitalRead(startButtonPin) == LOW && !gameRunning) { 
    gameRunning = true; //Pelin tila
    gameStartTime = millis(); //Tallentaa, kuinka kauan peli on ollut käynnissä.
    currentLed = random(0, 4); //Valitaan satunnainen ledi
    setLed(currentLed); //Sytytetään satunnainen ledi.
    consecutiveCorrectPresses = 0; //Nollataan oikeuden painallusten laskuri
    ledChangeDelay = 5000; // kuinka nopeaa ledi vaihtuu
    score = 0; // Nollataan pisteet
    pisteet = 0; // Resetoi näytöllä olevat pisteet
    displayNumber(pisteet); //näytetään pisteet
    Serial.println("Game Started!"); 
    playSound1(); //Kissaääni normipainalluksille. Soittaa äänen, kun peli alkaa.
    lastPressedButton = -1; //Nollataan viimeksi painettu nappi.
  }

//Pelin logiikka, kun peli on KÄYNNISSÄ
  if (gameRunning) { 
    unsigned long currentTime = millis(); //Tämänhetkinen aika
    if (currentTime - gameStartTime >= ledChangeDelay) { //Jos aika loppuu =>
       gameRunning = false; //Peli loppuu
       playSound2(); //Soittaa kissaäänen väärille painalluksille.
       clearAllLeds(); //Sammuttaa kaikki ledit
       Serial.println("Game Over: Timeout"); 
       Serial.print("Final Score: ");
       Serial.println(score);
       displayNumber(score);

      lastPressedButton = -1; //Nollataan viimeksi painettu nappi.
    }

    //Nappien pelilogiikka
    if (lastPressedButton != -1) { 
      if (lastPressedButton == currentLed) { //Jos on painettu oikeaa nappia 
        Serial.println("Correct Button Pressed!");
        consecutiveCorrectPresses++; //lisätään pisteitä.
        score++; 
        pisteet = score; // Päivittää näytöllä olevan pistemäärän
        Serial.print("Pisteet: ");
        Serial.println(score);
        displayNumber(pisteet);
        currentLed = random(0, 4); 
        setLed(currentLed);
        gameStartTime = millis(); // nollataan ajastin
        playSound1(); //soittaa äänen

        // Pelin nopeutus, vaikeutetaan peliä 
        if (consecutiveCorrectPresses >= 5) {
          ledChangeDelay = 3000; // 5 oikean painalluksen jälkeen aikaa on 3 sek
        }
        if (consecutiveCorrectPresses >= 25) {
          ledChangeDelay = 2000; // 10 oikean painalluksen jälkeen aikaa on 2 sek
        }
        if (consecutiveCorrectPresses >= 50) {
          ledChangeDelay = 1000; // 15 oikean painalluksen jälkeen aikaa on 1 sek
        }
        if (consecutiveCorrectPresses >= 100) {
          ledChangeDelay = 500; // 100 oikean painalluksen jälkeen aikaa on 0.5 sek
        }
        if (consecutiveCorrectPresses >= 200) {
          ledChangeDelay = 250; //200 oikean painalluksen jälkeen aikaa on 0.25 sek
        }
      } else if (lastPressedButton == 6 && score % 10 == 0) { // !HOX! EASTER EGG: jos pisteet on tasakymppi, voi start-nappia painaa uudelleen ja saa +5 pistettä.
        Serial.println("Secret Button Pressed!");
        consecutiveCorrectPresses++; 
        score += 5; // Lisää pisteitä
        pisteet = score; // Päivittää näytöllä olevan pistemäärän
        displayNumber(pisteet);
        currentLed = random(0, 4); //randomisoi ledin
        setLed(currentLed);
        gameStartTime = millis(); // resetoi timerin
      } else {
        gameRunning = false; //Peli loppuu
        playSound2(); //kissaääni väärille painalluksille
        clearAllLeds(); //sammuttaa ledit
        show2(4); 
        Serial.println("Game Over: Wrong Button");
        Serial.print("Final Score: ");
        Serial.println(score);
        displayNumber(score);
      }
      lastPressedButton = -1; // Resetoi painallukset
    }
  }
}

