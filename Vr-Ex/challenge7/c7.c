#include <stdio.h>

int main(){
    int a, b, c;
    printf("entrez le premier nombre : ");
    scanf("%d", &a);
    printf("entrez le deuxieme nombre : ");
    scanf("%d", &b);
    printf("entrez le troisieme nombre : ");
    scanf("%d", &c);
    printf("la moyenne ponderee de %d est : %d\n", a, a * 2 / 10);
    printf("la moyenne ponderee de %d est : %d\n", b, b * 3 / 10);
    printf("la moyenne ponderee de %d est : %d\n", c, c * 5 / 10);
    return 0;
}