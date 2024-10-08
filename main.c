#include <stdio.h>

int main(void) {
    int nvoti;
    float media, somma, voto;
    while (voto!=0) {
        printf("digita i voti:");
        scanf("%f", &voto);
        somma= somma+voto;
        nvoti++;
    }
    media= somma/(nvoti-1);
    printf("la media e': %.2f", media);
}
