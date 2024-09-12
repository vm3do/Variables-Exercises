#include <stdio.h>
int main(){
    int n;

    printf("Entrez le nombre d'elements du tab : ");
    scanf("%d", &n);

    int tab[n];

    for (int i = 0; i < n; i++) {
        printf("Entrez l'element %d : ", i + 1);
        scanf("%d", &tab[i]);
    }

    printf("\nLes elements du tab sont :\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", tab[i]);
    }

    return 0;
}