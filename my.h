#ifndef MY_H
#define MY_H

#include <ChainableLED.h>

// Définition de la structure avec typedef
typedef struct {
  int state_mod_colors;
} etat_t;

// Déclaration de la fonction pour initialiser la structure
void initCouleurStruct(etat_t* couleur_s);

// Ajout de la déclaration de la fonction changerCouleur
void change_mode(int bouton, etat_t* couleur_s);
void change_maint(int color, etat_t* couleur_s);
void mode_maint(int color, etat_t* couleur_s);

#endif // MY_H
