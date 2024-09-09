#include <stdio.h>

int main(){
    int kph;
    printf("entrez la vitesse en kilometres par heure : ");
    scanf("%d", &kph);
    float ms = kph * 0.27778;
    printf("la vitesse en metres par secondes = %.2f m/s", ms);
    return 0;
}