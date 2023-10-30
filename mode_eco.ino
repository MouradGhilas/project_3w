#include "my.h"

int mode_eco(int color, etat_t* couleur_s) {
  buttonPressStartTime = micros();
  
  while (digitalRead(color) == LOW && (micros() - buttonPressStartTime < 5000000)) {
    // Attends que le bouton soit relâché ou que 5 secondes se soient écoulées
  }
  if (micros() - buttonPressStartTime < 5000000) {
    return -1;
  }
  if ((micros() - buttonPressStartTime >= 5000000) && (micros() - buttonPressStartTime < 6000000)) {
    // Si le bouton a été pressé pendant exactement 5 secondes, change la couleur
    attachInterrupt(digitalPinToInterrupt(bouton_vert), led_bleu, CHANGE);
    detachInterrupt(digitalPinToInterrupt(bouton_vert));
    if (color == bouton_vert) {
      couleur_s->BLUE = true;
      couleur_s->YELLOW = false;
      couleur_s->GREEN = false;
      couleur_s->ORANGE = false;
    }
  }
  return 0;
}

int from_eco_to_stand(int color, etat_t* couleur_s) {
  buttonPressStartTime = micros();
  
  while (digitalRead(color) == LOW && (micros() - buttonPressStartTime < 5000000)) {
    // Attends que le bouton soit relâché ou que 5 secondes se soient écoulées
  }
  if (micros() - buttonPressStartTime < 5000000) {
    return -1;
  }
  if ((micros() - buttonPressStartTime >= 5000000) && (micros() - buttonPressStartTime < 6000000)) {
    // Si le bouton a été pressé pendant exactement 5 secondes, change la couleur
    attachInterrupt(digitalPinToInterrupt(bouton_rouge), led_verte, CHANGE);
    detachInterrupt(digitalPinToInterrupt(bouton_rouge));
    if (color == bouton_rouge) {
      couleur_s->GREEN = true;
      couleur_s->BLUE = false;
      couleur_s->YELLOW = false;
      couleur_s->ORANGE = false;
    }
  }
  // Détache l'interruption pour éviter d'être rappelé
  return 0;
}