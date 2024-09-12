#include <stdio.h>

int main(){
    int n, i, remp, new;
    printf("entrez le nombre des elements du tab : ");
    scanf("%d", &n);
    int tab[n];
    printf("entrez les elements du tab : \n");
    for(i = 0; i < n; i++){
        printf("entrez l'element %d : ", i+1);
        scanf("%d", &tab[i]);
    }
    printf("entrez la valeur a remplace : ");
    scanf("%d", &remp);
    for(i = 0; i < n; i++){
        if(tab[i] != remp){
            printf("la valeur \"%d\" n'existe pas.", remp);
            return 1;
        }
    }
    printf("entrez la nouvelle valeur : ");
    scanf("%d", &new);
    for(i = 0; i < n; i++){
        if(tab[i] == remp){
            tab[i] = new;
            printf("le remplacement est fait avec success!");
        }
    }
    return 0;
}