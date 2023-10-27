#include <stdio.h>

void Welcome_print(void)
{
     printf("\x1B[1;3;31m                                        \x1B[4m|Bienvenue sur le mode économique|\x1B[0m\x1B          \x1B[0m\n");
     printf("\x1B[37;2mEconomie de baterie activé:\x1B[0m\n");
     printf("\x1B[37;2m   -Désactivation de capteurs inutilisé.\x1B[0m\n");
     printf("\x1B[37;2m   -Désactivation de certains traitements.\x1B[0m\n");
     printf("\x1B[37;2mLED bleu continue activée.\x1B[0m\n");
     printf("\x1B[34m                                |-------------------------------------------------|\x1B[0m\n");
     printf("\x1B[34m                                |                                                 |\x1B[0m\n");
     printf("\x1B[39m                                |----------------\x1B[34mModes accessibles\x1B[0m----------------|\x1B[0m\n");
     printf("\x1B[39m                                |                       Mode                      |\x1B[0m\n");
     printf("\x1B[39m                                |                     standard                    |\x1B[0m\n");
     printf("\x1B[39m                                |-------------------------------------------------|\x1B[0m\n");
     printf("\x1B[34m                                |                                                 |\x1B[0m\n");
     printf("\x1B[34m                                |-------------------------------------------------|\x1B[0m\n");
     printf(" \n");
     printf("\x1B[38;1mA présent si vous voulez changer de mode voici les étapes:\x1B[0m\n");
     printf(" \n");
     printf("\x1B[37;2m-Mode standard: appuyez sur le bouton rouge durant 5secondes pour acceder à ce mode.\x1B[0m\n");
     printf(" \n");
}
int main(void)
{
    Welcome_print();
}