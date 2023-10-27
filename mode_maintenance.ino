#include "my.h"

//void change_maint(int color, etat_t* couleur_s) {
//  buttonPressStartTime = micros();
//  while (digitalRead(color) == LOW && (micros() - buttonPressStartTime < 10000000)) {
//    // Attends que le bouton soit relâché ou que 5 secondes se soient écoulées
//  }  
//    if ((micros() - buttonPressStartTime >= 10000000) && (micros() - buttonPressStartTime < 11000000)) {
//      // Si le bouton a été pressé pendant exactement 5 secondes, change la couleur
//          if (color == bouton_rouge) {
//            leds.setColorRGB(0, 255, 165, 0);  // orange
//            attachInterrupt(digitalPinToInterrupt(bouton_vert), etatBouton_vert, CHANGE);
//            couleur_s->orange = true;
//            couleur_s->jaune = false;
//            couleur_s->bleu = false;
//            couleur_s->vert = false;
//          }
//  }
//}