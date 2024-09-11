#include <stdio.h>
#include <string.h>

#define MAX_TACHES 100
#define MAX_TITRE 50
#define MAX_DESCRIPTION 200
#define MAX_DATE 11

char titres[MAX_TACHES][MAX_TITRE];
char descriptions[MAX_TACHES][MAX_DESCRIPTION];
char dates[MAX_TACHES][MAX_DATE];
int nombreTaches = 0;

void ajouterTache() {
    if (nombreTaches >= MAX_TACHES) {
        printf("Desole, la liste des taches est pleine !\n");
        return;
    }

    printf("Entrez le titre de la tache : ");
    scanf(" %[^\n]", titres[nombreTaches]);

    printf("Entrez la description de la tache : ");
    scanf(" %[^\n]", descriptions[nombreTaches]);

    printf("Entrez la date d'echeance (AAAA-MM-JJ) : ");
    scanf("%s", dates[nombreTaches]);

    nombreTaches++;
    printf("Tache ajoutee avec succes !\n");
}

void afficherTaches() {
    if (nombreTaches == 0) {
        printf("La liste des taches est vide.\n");
        return;
    }

    printf("\nListe des taches :\n");
    for (int i = 0; i < nombreTaches; i++) {
        printf("%d. Titre : %s\n   Description : %s\n   Date : %s\n\n", 
               i + 1, titres[i], descriptions[i], dates[i]);
    }
}

void supprimerTache() {
    if (nombreTaches == 0) {
        printf("La liste des taches est vide.\n");
        return;
    }

    int index;
    printf("Entrez le numero de la tache a supprimer : ");
    scanf("%d", &index);
    index--;

    if (index < 0 || index >= nombreTaches) {
        printf("Numero de tache invalide.\n");
        return;
    }

    for (int i = index; i < nombreTaches - 1; i++) {
        strcpy(titres[i], titres[i + 1]);
        strcpy(descriptions[i], descriptions[i + 1]);
        strcpy(dates[i], dates[i + 1]);
    }

    nombreTaches--;
    printf("Tache supprimee avec succes !\n");
}

void rechercherTache() {
    if (nombreTaches == 0) {
        printf("La liste des taches est vide.\n");
        return;
    }

    char titreRecherche[MAX_TITRE];
    printf("Entrez le titre de la tache a rechercher : ");
    scanf(" %[^\n]", titreRecherche);

    for (int i = 0; i < nombreTaches; i++) {
        if (strcmp(titres[i], titreRecherche) == 0) {
            printf("Tache trouvee :\n");
            printf("Titre : %s\n", titres[i]);
            printf("Description : %s\n", descriptions[i]);
            printf("Date : %s\n", dates[i]);
            return;
        }
    }

    printf("Tache non trouvee.\n");
}

int main() {
    int choix;

    while (1) {
        printf("\n===== Gestionnaire de Taches =====\n");
        printf("1. Ajouter une tache\n");
        printf("2. Supprimer une tache\n");
        printf("3. Afficher toutes les taches\n");
        printf("4. Rechercher une tache\n");
        printf("5. Quitter\n");
        printf("Choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajouterTache();
                break;
            case 2:
                supprimerTache();
                break;
            case 3:
                afficherTaches();
                break;
            case 4:
                rechercherTache();
                break;
            case 5:
                return 0;
            default:
                printf("Choix invalide. Veuillez reessayer.\n");
        }
    }

    return 0;
}