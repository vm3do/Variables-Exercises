#include <stdio.h>

int main(){
    int n, sum = 0;
    printf("entrez le nombres d'elements du tab : ");
    scanf("%d", &n);
    int tab[n];
    printf("entrez les elements du tab : \n");
    for(int i = 0; i < n; i++){
        printf("entrez l'element %d : ", i+1);
        scanf("%d", &tab[i]);
    }
    for(int i = 0; i < n; i++){
        sum += tab[i];
    }
    printf("la somme des elements est : %d", sum);
    return 0;
}