#include <stdio.h>

int main() {
    int n, i, remp, new, found = 0;
    printf("Entrez le nombre des elements du tab : ");
    scanf("%d", &n);
    int tab[n];
    
    printf("Entrez les elements du tab : \n");
    for(i = 0; i < n; i++) {
        printf("Entrez l'element %d : ", i+1);
        scanf("%d", &tab[i]);
    }

    printf("Entrez la valeur a remplace : ");
    scanf("%d", &remp);
    
    for(i = 0; i < n; i++) {
        if(tab[i] == remp) {
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("La valeur \"%d\" n'existe pas.\n", remp);
        return 1;
    }

    printf("Entrez la nouvelle valeur : ");
    scanf("%d", &new);

    for(i = 0; i < n; i++) {
        if(tab[i] == remp) {
            tab[i] = new;
        }
    }
    
    printf("Le remplacement est fait avec succes!\n");
    printf("new tableau : ");
    for(i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}