#include <stdio.h>

struct compteinfo{
    char nom [50];
    float solde;
};

void deposer(struct compteinfo *ptr, float montant){
    ptr->solde += montant;
}

void affichage(struct compteinfo *ptr){
    printf("Le nom : %s\n", ptr->nom);
    printf("Le Solde : %.2f\n", ptr->solde);
}

int main(){
    struct compteinfo compte;

    printf("Entrez le nom du titulaire du compte: ");
    scanf(" %[^\n]", compte.nom);

    printf("Entrez le solde du titulaire du compte: ");
    scanf("%f", &compte.solde);

    printf("------ les information du compte ------\n");

    affichage(&compte);

    float montant;

    printf("entrez le montant a ajoute : ");
    scanf("%f", &montant);

    deposer(&compte, montant);

    printf("------ les information du compte apres depot ------\n");
    affichage(&compte);
    return 0;
}