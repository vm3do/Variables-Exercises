#include <stdio.h>

int main(){
    int n, i, taille;

    printf("entrez le nombre des elemnts du tab : ");
    scanf("%d", &n);

    int tab[n];
    int tabcopy[n];
    printf("entrez les elements du tab :\n");
    for(i = 0; i < n; i++){
        printf("entrez l'element %d : ", i + 1);
        scanf("%d", &tab[i]);
    }
    for(i = 0; i < n; i++){
        tabcopy[i] = tab[i];
    }
    printf("les elements du tab original sont : ");
    for(i = 0; i < n; i++){
        printf("%d ", tab[i]);
    }
    printf("\n");
    printf("les elements du tab copie sont : ");
    for(i = 0; i < n; i++){
        printf("%d ", tabcopy[i]);
    }
    return 0;
}