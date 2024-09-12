#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Entrez un nombre entier : ");
    scanf("%d", &n);

    printf("La somme est ");

    for (int i = 1; i <= n; i++) {
        sum += i;
        if (i == n) {
            printf("%d", i);
        } else {
            printf("%d + ", i);
        }
    }

    printf(" = %d\n", sum);
    return 0;
}
