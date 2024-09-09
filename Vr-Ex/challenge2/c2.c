#include <stdio.h>

int main(){
    int C;
    printf("entrez la temperature en Celsius : ");
    scanf("%d", &C);
    float K = C + 273.15;
    printf("la temperature en kelvin = %.2f", K);
    return 0;
}