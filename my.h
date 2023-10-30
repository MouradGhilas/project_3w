#ifndef MY_H
#define MY_H

#include <ChainableLED.h>


// Définition de la structure avec typedef
typedef struct {
  bool GREEN;
  bool YELLOW;
  bool BLUE;
  bool ORANGE;
} etat_t;

// Déclaration de la fonction pour initialiser la structure
void initCouleurStruct(etat_t* couleur_s);

// Ajout de la déclaration de la fonction changerCouleur
void function_led_colors(etat_t* couleur_s);

int mode_stand(int bouton, etat_t* couleur_s);
int mode_config(int bouton, etat_t* couleur_s);
int mode_eco(int color, etat_t* couleur_s);
int from_eco_to_stand(int color, etat_t* couleur_s);
int mode_maint(int color, etat_t* couleur_s);
int mode_precedent_maint(int bouton, etat_t* couleur_s);

void led_verte();
void led_jaune();
void led_bleu();
void led_orange();

#endif // MY_H
