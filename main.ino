#include "my.h"

const int bouton_vert = 2;  // Connecte le bouton vert à la broche D2
const int bouton_rouge = 3;  // Connecte le bouton rouge à la broche D3

unsigned long buttonPressStartTime = 0;

int etatBouton_vert = 0;
int etatBouton_rouge = 0;


bool mode_standart_vert = true;

etat_t couleur_s;

ChainableLED leds(7, 8, 5);


void setup() {
  pinMode(bouton_vert, INPUT);
  pinMode(bouton_rouge, INPUT);
  leds.init();
  Serial.begin(9600);
  mode_par_defaut_vert();
  initCouleurStruct(&couleur_s);
}


void loop() {
  etatBouton_vert = digitalRead(bouton_vert);
  etatBouton_rouge = digitalRead(bouton_rouge);

  if (etatBouton_vert == LOW && !couleur_s.vert) {
    change_mode(bouton_vert, &couleur_s);
  }

  if (etatBouton_rouge == LOW && !couleur_s.jaune) {
    change_mode(bouton_rouge, &couleur_s);
    mode_standart_vert = false;
  }
  //delay(500);
}
