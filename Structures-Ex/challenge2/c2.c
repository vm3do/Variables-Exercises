#include <stdio.h>

struct etudiant{
    char nom[20];
    char prenom[20];
    int notes[5];
};

int main(){
    struct etudiant etd1;

    printf("entrez le nom : ");
    scanf("%19s", etd1.nom);

    printf("entrez le prenom : ");
    scanf("%19s", etd1.prenom);

    printf("entrez 5 notes : \n");
    for(int i = 0; i < 5; i++){
        printf(" note %d : ", i + 1);
        scanf("%d", &etd1.notes[i]);
    }

    printf("----- les informations de la personne -----\n");
    printf("Nom : %s\n", etd1.nom);
    printf("Prenom : %s\n", etd1.prenom);
    for(int i = 0; i < 5; i++){
        printf("note %d : %d\n", i + 1, etd1.notes[i]);
    }

    return 0;
}