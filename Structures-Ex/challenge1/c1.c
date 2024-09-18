#include <stdio.h>

struct personne {
    char nom[20];
    char prenom[20];
    int age;
};

int main(){
    struct personne person1; 
    printf("entrez le nom : ");
    scanf("%19s", person1.nom);

    printf("entrez le prenom : ");
    scanf("%19s", person1.prenom);

    printf("entrez l'age : ");
    scanf("%d", &person1.age);

    printf("----- les informations de la personne -----\n");
    printf("Nom : %s\n", person1.nom);
    printf("Prenom : %s\n", person1.prenom);
    printf("Age : %d\n", person1.age);

    return 0;
}