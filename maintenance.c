#include <stdio.h>

void Welcome_print(void)
{
     printf("\x1B[1;3;31m                                        \x1B[4m|Bienvenue sur le mode maintenance|\x1B[0m\x1B          \x1B[0m\n");
     printf("\x1B[37;2mAccès au données des capteurs disponible...\x1B[0m\n");
     printf("\x1B[37;2mChangement de carte SD disponible en toute sécurité...\x1B[0m\n");
     printf("\x1B[37;2mLED orange continue activée.\x1B[0m\n");
     printf("\x1B[31m                                |-------------------------------------------------|\x1B[0m\n");
     printf("\x1B[31m                                |                                                 |\x1B[0m\n");
     printf("\x1B[39m                                |----------------\x1B[31mModes accessibles\x1B[0m----------------|\x1B[0m\n");
     printf("\x1B[39m                                |          Mode          |          Mode          |\x1B[0m\n");
     printf("\x1B[39m                                |        standard        |       économique       |\x1B[0m\n");
     printf("\x1B[39m                                |-------------------------------------------------|\x1B[0m\n");
     printf("\x1B[31m                                |                                                 |\x1B[0m\n");
     printf("\x1B[31m                                |-------------------------------------------------|\x1B[0m\n");
     printf(" \n");
     printf("\x1B[38;1mA présent voici vos disponibilitées:\x1B[0m\n");
     printf(" \n");
     printf("\x1B[37;2m-Mode précédent: en appuyant 5secondes sur le bouton rouge le système basculera sur le mode précédent.\x1B[0m\n");
     printf("\x1B[37;2m-Changer de carte SD sans changer de mode durant le processus.\x1B[0m\n");
     printf("\x1B[37;2m-Acceder à l'interface série pour consulter les données des capteurs.\x1B[0m\n");
     printf(" \n");
}
int main(void)
{
    Welcome_print();
}