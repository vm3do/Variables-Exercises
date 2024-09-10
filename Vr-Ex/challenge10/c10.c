#include <stdio.h>
#include <math.h>
const float pi = 3.14;
int main(){
    float r;
    printf("entrez le rayon : ");
    scanf("%f", &r);
    float volume = 4.0/3.0 * pi * pow(r, 3);
    printf("le volume de la sphere est : %.2f", volume);
    return 0;
}