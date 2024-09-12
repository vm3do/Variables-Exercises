#include <stdio.h>

int main() {
    int n, i;
    printf("Entrez le nombre des elements du tab : ");
    scanf("%d", &n);
    int tab[n];
    
    printf("Entrez les elements du tab : \n");
    for(i = 0; i < n; i++) {
        printf("Entrez l'element %d : ", i+1);
        scanf("%d", &tab[i]);
    }
    for(i = 0; i < n; i++){
        if(tab[i] % 2 == 0){
            printf("%d ", tab[i]);
        }
    }
    return 0;
}