#include "my.h"

int mode_config(int color, etat_t* couleur_s) {
  buttonPressStartTime = micros();
  
  while (digitalRead(color) == LOW && (micros() - buttonPressStartTime < 5000000)) {
    // Attends que le bouton soit relâché ou que 5 secondes se soient écoulées
  }
  if (micros() - buttonPressStartTime < 5000000) {
    return -1;
  }
  if ((micros() - buttonPressStartTime >= 5000000) && (micros() - buttonPressStartTime < 6000000)) {
    // Si le bouton a été pressé pendant exactement 5 secondes, change la couleur
    attachInterrupt(digitalPinToInterrupt(bouton_rouge), led_jaune, CHANGE);
    detachInterrupt(digitalPinToInterrupt(bouton_rouge));
    if (color == bouton_rouge) {
      //leds.setColorRGB(0, 255, 255, 0);  // Jaune
      couleur_s->YELLOW = true;
      couleur_s->GREEN = false;
      couleur_s->BLUE = false;
      couleur_s->ORANGE = false;
    }
  } else {
    // Gestion d'erreur si le bouton n'a pas été pressé pendant exactement 5 secondes
    Serial.print("Erreur : Le bouton ");
    Serial.print((color == bouton_vert) ? "vert" : "rouge");
    Serial.println(" n'a pas été pressé pendant 5 secondes.");
    //leds.setColorRGB(0, 255, 255, 0);  // Jaune

    return -1;
  }
  // Détache l'interruption pour éviter d'être rappelé
  return 0;
}