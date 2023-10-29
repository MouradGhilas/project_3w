#include <stdio.h>

void Welcome_print(void)
{
     printf("\x1B[1;3;31m                                        \x1B[4m|Bienvenue sur le mode configuration|\x1B[0m\x1B          \x1B[0m\n");
     printf("\x1B[37;2mConfiguration des paramètres système disponible...\x1B[0m\n");
     printf("\x1B[37;2mAcquisition des capteurs désactivé.\x1B[0m\n");
     printf("\x1B[37;2mLED jaune continue activée.\x1B[0m\n");
     printf("\x1B[33m                                |-------------------------------------------------|\x1B[0m\n");
     printf("\x1B[33m                                |                                                 |\x1B[0m\n");
     printf("\x1B[39m                                |----------------\x1B[33mModes accessibles\x1B[0m----------------|\x1B[0m\n");
     printf("\x1B[39m                                |                      AUCUN                      |\x1B[0m\n");
     printf("\x1B[39m                                |-------------------------------------------------|\x1B[0m\n");
     printf("\x1B[33m                                |                                                 |\x1B[0m\n");
     printf("\x1B[33m                                |-------------------------------------------------|\x1B[0m\n");
     printf(" \n");
     printf("\x1B[38;1mA présent voici vos disponibilitées:\x1B[0m\n");
     printf(" \n");
     printf("\x1B[37;2m-Vous pouvez configurer le système depuis la console sur l’interface série du microcontrôleur.\x1B[0m\n");
     printf("\x1B[37;2m-Attendre 30min sans aucune activité pour basculer en mode standard.\x1B[0m\n");
     printf(" \n");
}

int main(void)
{
    Welcome_print();
}
