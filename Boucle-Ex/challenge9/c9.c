#include <stdio.h>

int main() {
    int nombre, compteur = 0;

    printf("Entrez un entier positif : ");
    scanf("%d", &nombre);

    if (nombre <= 0) {
        printf("Veuillez entrer un entier positif.\n");
        return 1;
    }

    while (nombre != 0) {
        nombre /= 10;
        compteur++;
    }

    printf("Nombre de chiffres = %d\n", compteur);
    return 0;
}
