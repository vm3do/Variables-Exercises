#include <stdio.h>

int main() {
    int nombre, inverse = 0;
    printf("Entrez un entier : ");
    scanf("%d", &nombre);
    while (nombre != 0) {
        inverse = inverse * 10 + nombre % 10;
        nombre /= 10;
    }
    printf("Le nombre inverse est : %d\n", inverse);
    return 0;
}
