#include <stdio.h>

int main() {
    int choix;
    double ann, m, j, h, min, sec;
    printf("Entrez le nombre d'annees : ");
    scanf("%lf", &ann);
    printf("\nChoisissez une conversion :\n");
    printf("1. Convertir en mois\n");
    printf("2. Convertir en jour\n");
    printf("3. Convertir en heures\n");
    printf("4. Convertir en minutes\n");
    printf("5. Convertir en secends\n");
    printf("Entrez votre choix (1 --> 5) : ");
    scanf("%d", &choix);
    switch (choix) {
        case 1:
            m = ann * 12;
            printf("%.1f annee(s) equivaut a %.1f m.\n", ann, m);
            break;
        case 2:
            j = ann * 365;
            printf("%.1f annee(s) equivaut a %.1f j.\n", ann, j);
            break;
        case 3:
            h = ann * 365 * 24;
            printf("%.1f annee(s) equivaut a %.1f h.\n", ann, h);
            break;
        case 4:
            min = ann * 365 * 24 * 60;
            printf("%.1f annee(s) equivaut a %.1f min.\n", ann, min);
            break;
        case 5:
            sec = ann * 365 * 24 * 60 * 60;
            printf("%.1f annee(s) equivaut a %.1f sec.\n", ann, sec);
            break;
        default:
            printf("Choix invalide. Veuillez choisir un nombre entre 1 et 5.\n");
            break;
    }

    return 0;
}