#include <stdio.h>
#include <string.h>

struct livre{
    char titre[100];
    char auteur[50];
    int annee;
};

struct livre lfunc(char* titre, char* auteur, int annee){
    struct livre l1;
    strcpy(l1.titre, titre);
    strcpy(l1.auteur, auteur);
    l1.annee = annee;
    return l1;
}

int main(){
    char titre[100];
    char auteur[50];
    int annee;
    printf("entrez le titre : ");
    scanf(" %[^\n]", titre);

    printf("entrez le nom d'auteur : ");
    scanf(" %[^\n]", auteur);

    printf("entrez l'annee : ");
    scanf("%d", &annee);

    struct livre livre1 = lfunc(titre, auteur, annee);

    printf("------ les information du livre ------\n");
    printf("-Le titre : %s\n",livre1.titre);
    printf("-L'auteur : %s\n",livre1.auteur);
    printf("-L'annee : %d\n",livre1.annee);

    return 0;
}