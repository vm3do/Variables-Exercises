#include <stdio.h>
#include <stdlib.h>

struct employe {
    char nom[50];
    int salaire;
};

int main(){
    int n , i;
    printf("entrez le nombre des employee : ");
    scanf("%d", &n);
    struct employe *liste = malloc(n *sizeof (struct employe));
    if(liste == NULL){
        printf("erreur d'allocation!");
        return 1;
    }
    for(i = 0; i < n; i++){
        printf("entrez le nom d'employe %d: ", i+1);
        scanf(" %[^\n]", liste[i].nom);
        printf("entrez le salaire d'employe %d : ", i+1);
        scanf("%d", &liste[i].salaire);
    }

    printf("--------- les informations des employes ---------\n");
    for(i = 0; i < n; i++){
        printf("---------- employe %d ---------\n", i+1);
        printf("-Nom : %s\n", liste[i].nom);
        printf("-Salaire : %d\n", liste[i].salaire);
    }
    printf("---------------------------------------\n");
    free(liste);
    return 0;

}