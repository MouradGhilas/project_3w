#include <stdio.h>

void Welcome_print(void)
{
     printf("\x1B[36m                                |----------------------------------------------------|\x1B[0m\n");
     printf("\x1B[36m                                |                \x1B[1;3mDonnées des capteurs\x1B[0m                \x1B[36m|\x1B[0m\n");
     printf("\x1B[36m                                |----------------------------------------------------|\x1B[0m\n");
     printf("\x1B[36m                                |\x1B[0m\x1B[38m Pression        \x1B[36m|\x1B[0m\x1B[38m                                  \x1B[36m|\x1B[0m\n");
     printf("\x1B[36m                                |\x1B[35m----------------------------------------------------\x1B[0m\x1B[36m|\x1B[0m\n");
     printf("\x1B[36m                                |\x1B[0m\x1B[38m Temperature air \x1B[36m|\x1B[0m\x1B[38m                                  \x1B[36m|\x1B[0m\n");
     printf("\x1B[36m                                |\x1B[35m----------------------------------------------------\x1B[0m\x1B[36m|\x1B[0m\n");
     printf("\x1B[36m                                |\x1B[0m\x1B[38m Altitude        \x1B[36m|\x1B[0m\x1B[38m                                  \x1B[36m|\x1B[0m\n");
     printf("\x1B[36m                                |\x1B[35m----------------------------------------------------\x1B[0m\x1B[36m|\x1B[0m\n");
     printf("\x1B[36m                                |\x1B[0m\x1B[38m Hygrometrie     \x1B[36m|\x1B[0m\x1B[38m                                  \x1B[36m|\x1B[0m\n");
     printf("\x1B[36m                                |\x1B[35m----------------------------------------------------\x1B[0m\x1B[36m|\x1B[0m\n");
     printf("\x1B[36m                                |\x1B[0m\x1B[38m temperature eau \x1B[36m|\x1B[0m\x1B[38m                                  \x1B[36m|\x1B[0m\n");
     printf("\x1B[36m                                |\x1B[35m----------------------------------------------------\x1B[0m\x1B[36m|\x1B[0m\n");
     printf("\x1B[36m                                |\x1B[0m\x1B[38m Courant marin   \x1B[36m|\x1B[0m\x1B[38m                                  \x1B[36m|\x1B[0m\n");
     printf("\x1B[36m                                |\x1B[35m----------------------------------------------------\x1B[0m\x1B[36m|\x1B[0m\n");
     printf("\x1B[36m                                |\x1B[0m\x1B[38m Force du vent   \x1B[36m|\x1B[0m\x1B[38m                                  \x1B[36m|\x1B[0m\n");
     printf("\x1B[36m                                |\x1B[35m----------------------------------------------------\x1B[0m\x1B[36m|\x1B[0m\n");
     printf("\x1B[36m                                |\x1B[0m\x1B[38m Luminosité      \x1B[36m|\x1B[0m\x1B[38m                                  \x1B[36m|\x1B[0m\n");
     printf("\x1B[36m                                |\x1B[35m----------------------------------------------------\x1B[0m\x1B[36m|\x1B[0m\n");
     printf("\x1B[36m                                |\x1B[0m\x1B[38m Capteur 9       \x1B[36m|\x1B[0m\x1B[38m                                  \x1B[36m|\x1B[0m\n");
     printf("\x1B[36m                                |----------------------------------------------------|\x1B[0m\n");
     printf(" \n");
}
int main(void)
{
    Welcome_print();
}