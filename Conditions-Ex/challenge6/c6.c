#include <stdio.h>

int main() {
    double nombre;

    printf("Entrez un nombre : ");
    scanf("%lf", &nombre);
    if (nombre > 0) {
        printf("Le nombre %.2f est positif.\n", nombre);
    } else if (nombre < 0) {
        printf("Le nombre %.2f est negatif.\n", nombre);
    } else {
        printf("Le nombre est nul.\n");
    }

    return 0;
}
