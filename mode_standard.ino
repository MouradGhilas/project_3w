#include "my.h"

void led_verte() {
  leds.setColorRGB(0, 0, 180, 0);  // Vert
}

void led_jaune() {
  leds.setColorRGB(0, 180, 180, 0);  // jaune
}

void led_bleu() {
  leds.setColorRGB(0, 0, 0, 180);  // bleu
}

int mode_stand(int color, etat_t* couleur_s) {
  buttonPressStartTime = micros();
  
  while (digitalRead(color) == LOW && (micros() - buttonPressStartTime < 5000000)) {
    // Attends que le bouton soit relâché ou que 5 secondes se soient écoulées
  }
  if (micros() - buttonPressStartTime < 5000000) {
    return -1;
  }
  if ((micros() - buttonPressStartTime >= 5000000) && (micros() - buttonPressStartTime < 6000000)) {
    // Si le bouton a été pressé pendant exactement 5 secondes, change la couleur
    attachInterrupt(digitalPinToInterrupt(bouton_vert), led_verte, CHANGE);
    detachInterrupt(digitalPinToInterrupt(bouton_vert));
    if (color == bouton_vert) {
      couleur_s->GREEN = true;
      couleur_s->YELLOW = false;
      couleur_s->BLUE = false;
      couleur_s->ORANGE = false;
    }
  } else {
    // Gestion d'erreur si le bouton n'a pas été pressé pendant exactement 5 secondes
    Serial.print("Erreur : Le bouton ");
    Serial.print((color == bouton_vert) ? "vert" : "rouge");
    Serial.println(" n'a pas été pressé pendant 5 secondes.");

    return -1;
  }
  // Détache l'interruption pour éviter d'être rappelé
  return 0;
}



void function_led_colors(etat_t* couleur_s) {
  if (couleur_s->GREEN == true) {    
    leds.setColorRGB(0, 0, 180, 0);  // Vert
  }
  if (couleur_s->YELLOW == true) {    
    leds.setColorRGB(0, 180, 180, 0);  // Jaune
  }
  if (couleur_s->BLUE == true) {    
    leds.setColorRGB(0, 0, 0, 255);  // Bleu
  }
  if (couleur_s->ORANGE == true) {    
    leds.setColorRGB(0, 255, 165, 0);  // Orange
  }
}

//void mode_par_defaut_vert() {
//  if (mode_standard_vert == 1) {
//    leds.setColorRGB(0, 0, 255, 0);  // vert
//  }
//}
