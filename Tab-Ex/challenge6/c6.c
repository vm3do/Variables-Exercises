#include <stdio.h>

int main(){
    int n, f;
    printf("entrez le nombre des elemnts du tab : ");
    scanf("%d", &n);
    int tab[n];
    printf("entrez les elements du tab :\n");
    for(int i = 0; i < n; i++){
        printf("entrez l'element %d : ", i + 1);
        scanf("%d", &tab[i]);
    }
    printf("entrez le facteur : ");
    scanf("%d", &f);
    for(int i = 0; i < n; i++){
        printf(" %d * %d = %d\n", tab[i], f, tab[i] * f);
    }
    return 0;
}