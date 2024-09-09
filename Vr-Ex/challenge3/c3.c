#include <stdio.h>

int main(){
    int km;
    printf("entrez la distance en kilometres : ");
    scanf("%d", &km);
    float yards = km * 1093.61;
    printf("la distance en yards = %.2f", yards);
    return 0;
}