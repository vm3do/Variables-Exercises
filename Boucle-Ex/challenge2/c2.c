#include <stdio.h>

int main() {
    int n, i;
    int factorial = 1;

    printf("Entrez un nombre entier positif: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("La factorielle n'existe pas pour les nombres négatifs.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("%d! = %d\n", n, factorial);
    }

    return 0;
}
