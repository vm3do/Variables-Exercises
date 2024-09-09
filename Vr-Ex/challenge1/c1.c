#include <stdio.h>

int main(){
    char nom[30];
    char prenom[30];
    int age;
    char sex[10];
    char email[100];
    printf("entrez votre nom : ");
    scanf("%s", nom);
    printf("entrez votre prenom : ");
    scanf("%s", prenom);
    printf("entrez votre age : ");
    scanf("%d", &age);
    printf("entrez votre sexe : ");
    scanf("%s", sex);
    printf("entrez votre email : ");
    scanf("%s", email);
    printf("votre nom est : %s\n", nom);
    printf("votre prenom est : %s\n", prenom);
    printf("votre age est : %d\n", age);
    printf("votre sexe est : %s\n", sex);
    printf("votre email est : %s\n", email);
    return 0;
}