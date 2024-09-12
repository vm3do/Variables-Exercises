#include <stdio.h>

int main() {
    int n, a = 0, b = 1, suivant;

    printf("Entrez le nombre pour la suite de Fibonacci : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Veuillez entrer un nombre positif.\n");
        return 1;
    }

    printf("Les %d premiers termes de la suite de Fibonacci sont :\n", n);

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d", a);
        } else if (i == 1) {
            printf(", %d", b);
        } else {
            suivant = a + b;
            printf(", %d", suivant);
            a = b;
            b = suivant;
        }
    }

    printf("\n");

    return 0;
}
