#include <stdio.h>

void Welcome_print(void)
{
    printf("                      ***********************    Hello-World! :) ***************************\n");
    printf("                      *                                                                    *\n");
    printf("                      *                                                                    *\n");
    printf("                      *                                                                    *\n");
    printf("                      *            Welcome-to-the-project-World-Wide-Weather               *\n");
    printf("                      *                  _____________________________                     *\n");
    printf("                      *                 |done in collaboration with : |                    *\n");
    printf("                      *                 |  Mourad Ghilas Messaoudi    |                    *\n");
    printf("                      *                 |  Selim Jabnoun              |                    *\n");
    printf("                      *                 |  Myriam  Ferchichi          |                    *\n");
    printf("                      *                 |  Ayman Bouibridene          |                    *\n");
    printf("                      *                 |  Rachel Razafindriantsoa    |                    *\n");
    printf("                      *                 |_____________________________|                    *\n");
    printf("                      *                                                                    *\n");
    printf("                      **********************************************************************\n");
    printf(" \n");
     printf("\x1B[1;3;31m                                        \x1B[4m|Bienvenue sur le mode standard|\x1B[0m\x1B          \x1B[0m\n");
     printf("\x1B[37;2mAcquisition des données disponible...\x1B[0m\n");
     printf("\x1B[37;2mLED verte continue activée.\x1B[0m\n");
     printf("\x1B[32m                                |-------------------------------------------------|\x1B[0m\n");
     printf("\x1B[32m                                |                                                 |\x1B[0m\n");
     printf("\x1B[39m                                |----------------\x1B[32mModes accessibles\x1B[0m----------------|\x1B[0m\n");
     printf("\x1B[39m                                |      Mode      |     Mode      |      Mode      |\x1B[0m\n");
     printf("\x1B[39m                                |  configuration |  maintenance  |   économique   |\x1B[0m\n");
     printf("\x1B[39m                                |-------------------------------------------------|\x1B[0m\n");
     printf("\x1B[32m                                |                                                 |\x1B[0m\n");
     printf("\x1B[32m                                |-------------------------------------------------|\x1B[0m\n");
     printf(" \n");
     printf("\x1B[38;1mA présent si vous voulez changer de mode voici les étapes:\x1B[0m\n");
     printf(" \n");
     printf("\x1B[37;2m-Mode configuration: appuyez sur le bouton rouge pour acceder à ce mode.\x1B[0m\n");
     printf("\x1B[37;2m-Mode maintenance: appuyez sur le bouton rouge durant 5secondes pour acceder à ce mode.\x1B[0m\n");
     printf("\x1B[37;2m-Mode économique: appuyez sur le bouton vert durant 5secondes pour acceder à ce mode.\x1B[0m\n");
     printf(" \n");
}
int main(void)
{
    Welcome_print();
}
