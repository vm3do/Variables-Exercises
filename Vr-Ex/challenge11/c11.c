#include <stdio.h>
int main(){
    float lon, larg;
    printf("entrez la longeur : ");
    scanf("%f", &lon);
    printf("entrez la largeur : ");
    scanf("%f", &larg);
    printf("la surface du rectangle est : %.2f ", lon * larg);
    return 0;
}