#include "my.h"


const int bouton_vert = 2;  // Connecte le bouton vert à la broche D2
const int bouton_rouge = 3;  // Connecte le bouton rouge à la broche D3

unsigned long buttonPressStartTime = 0;

int etatBouton_vert = 0;
int etatBouton_rouge = 0;

unsigned long StartTime = 0;
const unsigned long Timeout = 3 * 60 * 1000000;  // 3 minutes en microsecondes
unsigned long currentTime = 0;

//bool mode_standard_vert = true;

etat_t couleur_s;

ChainableLED leds(7, 8, 1);



void setup() {
  pinMode(bouton_vert, INPUT);
  pinMode(bouton_rouge, INPUT);
  leds.init();
  //initInter();
  Serial.begin(9600);
  //mode_par_defaut_vert();
  initCouleurStruct(&couleur_s);
}

void loop() {
  etatBouton_vert = digitalRead(bouton_vert);
  etatBouton_rouge = digitalRead(bouton_rouge);


  if (digitalRead(bouton_vert) == 0 && !couleur_s.GREEN) {
    mode_stand(bouton_vert, &couleur_s);
  } else if (digitalRead(bouton_rouge) == 0 && couleur_s.GREEN && !couleur_s.YELLOW) {
    mode_config(bouton_rouge, &couleur_s);
  } else if (digitalRead(bouton_vert) == 0 && couleur_s.GREEN) {
    mode_eco(bouton_vert, &couleur_s);
  } else if (digitalRead(bouton_rouge) == 0 && couleur_s.BLUE) {
    from_eco_to_stand(bouton_rouge, &couleur_s);
  } else if (couleur_s.YELLOW == true) {
    while (digitalRead(bouton_vert) == 1 && digitalRead(bouton_rouge) == 1 && couleur_s.YELLOW == true) {
      currentTime = micros();
      if (currentTime - StartTime >= Timeout) {
        attachInterrupt(digitalPinToInterrupt(bouton_vert), led_verte, CHANGE);
        detachInterrupt(digitalPinToInterrupt(bouton_vert));
        couleur_s.GREEN = true;
        couleur_s.YELLOW = false;
        couleur_s.BLUE = false;
        couleur_s.ORANGE = false;
      }

    }
    StartTime = micros();
  }
  function_led_colors(&couleur_s);

  //if (etatBouton_vert == LOW && couleur_s.vert) {
  //  //mode_eco(bouton_vert, &couleur_s);
  //}
  //if (etatBouton_vert == LOW && (couleur_s.bleu == true || couleur_s.vert == true)) {
  //  //change_maint(bouton_vert, &couleur_s);
  //}
}

