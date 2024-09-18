#include <stdio.h>

struct produit {
    char nom[50];
    int prix;
    int quantity;
};

int main(){
    printf("------ gestion des produits ------\n");

    struct produit produits[5];

    for(int i = 0; i < 5; i++){
    printf("entrez le nom du produit %d : ", i+1);
    scanf(" %[^\n]", produits[i].nom);

    printf("entrez le prix du produit %d : ", i+1);
    scanf("%d", &produits[i].prix);

    printf("entrez la quantity du produit %d: ", i+1);
    scanf("%d", &produits[i].quantity);

    printf("---------------------------------\n");
    }

    printf("------ les informations des produits ------\n");

    for(int i = 0; i < 5; i++){
    printf("------ produit %d ------\n", i+1);
    printf("-le nom du produit : %s\n", produits[i].nom);
    printf("-le prix du produit : %d\n", produits[i].prix);
    printf("-la quantity du produit : %d\n", produits[i].quantity);
    }
    printf("---------------------------------\n");

    return 0;
}