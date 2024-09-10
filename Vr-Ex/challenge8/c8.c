#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c;
    printf("entrez le premier nombre : ");
    scanf("%f", &a);
    printf("entrez le deuxieme nombre : ");
    scanf("%f", &b);
    printf("entrez le troisieme nombre : ");
    scanf("%f", &c);
    float mg = pow(a * b * c, 1.0 / 3.0);
    printf(" la moyenne geometrique de ces nombres est : %.2f", mg);
    return 0;
}