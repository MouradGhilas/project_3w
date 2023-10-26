#include "my.h"

void change_mode(int color, etat_t* couleur_s) {
  buttonPressStartTime = micros();
  while (digitalRead(color) == LOW && (micros() - buttonPressStartTime < 5000000)) {
    // Attends que le bouton soit relâché ou que 5 secondes se soient écoulées
  }
  if ((micros() - buttonPressStartTime >= 5000000) && (micros() - buttonPressStartTime < 6000000)) {
    // Si le bouton a été pressé pendant exactement 5 secondes, change la couleur
    if (color == bouton_vert) {
      leds.setColorRGB(0, 0, 255, 0);  // vert 
      couleur_s->vert = true;
      couleur_s->jaune = false;
    } else if (color == bouton_rouge) {
      leds.setColorRGB(0, 255, 255, 0);  // jaune
      couleur_s->jaune = true;
      couleur_s->vert = false;
    }
  } else {
    // Gestion d'erreur si le bouton n'a pas été pressé pendant exactement 5 secondes
    Serial.print("Erreur : Le bouton ");
    Serial.print((color == bouton_vert) ? "vert" : "rouge");
    Serial.println(" n'a pas été pressé pendant 5 secondes.");
  }
}

void mode_par_defaut_vert() {
  if (mode_standart_vert) {
    leds.setColorRGB(0, 0, 255, 0);  // vert
  }
}