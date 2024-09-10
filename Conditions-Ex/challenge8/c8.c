#include <stdio.h>

int main() {
    double moyenne;

    printf("Entrez la moyenne de l'eleve : ");
    scanf("%lf", &moyenne);

    if (moyenne < 10) {
        printf("Recale\n");
    } else if (moyenne >= 10 && moyenne < 12) {
        printf("Mention : Passable\n");
    } else if (moyenne >= 12 && moyenne < 14) {
        printf("Mention : Assez bien\n");
    } else if (moyenne >= 14 && moyenne < 16) {
        printf("Mention : Bien\n");
    } else if (moyenne >= 16) {
        printf("Mention : Tres bien\n");
    } else {
        printf("Moyenne invalide.\n");
    }
    return 0;
}