#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    printf("Entrez le nombre des elements du tab : ");
    scanf("%d", &n);
    int tab[n];
    
    printf("Entrez les elements du tab : \n");
    for(i = 0; i < n; i++) {
        printf("Entrez l'element %d : ", i+1);
        scanf("%d", &tab[i]);
    }
    for(i = 0; i < n; i++){
        sum += tab[i];
    }
    printf("la moyenne des elements est : %.2f", sum / n);
}