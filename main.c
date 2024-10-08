#include <stdio.h>

int main(void) {
    int nvoti;
    float media, somma=0, voto;
    while (voto!=0) {
        printf("digita il voto (premi '0' per terminare il programma): ");
        scanf("%f", &voto);
        somma= somma+voto;
        nvoti++;
    }
    media= somma/(nvoti-1);
    printf("la media e': %.2f", media);
}
