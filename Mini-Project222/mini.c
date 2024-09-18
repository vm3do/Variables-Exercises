#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct Contact {
    char nom[50];
    char telephone[11];
    char email[50];
};

int n = 0;  // numero des contacts || counter
struct Contact* contacts = NULL;

int validNum(char* numero) {
    if (strlen(numero) != 10) return 0;
    for (int i = 0; numero[i] != '\0'; i++) {
        if (!isdigit(numero[i])) return 0;
    }
    return 1;
}

int validEmail(char* email) {
    int arobas_position = -1;
    int no9ta_position = -1;
    int length = strlen(email);

    for (int i = 0; i < length; i++) {
        if (email[i] == '@') {
            if (arobas_position != -1 || i == 0) return 0;  // Invalid if multiple '@' or '@' at start
            arobas_position = i;
        }
        if (email[i] == '.' && arobas_position != -1) {
            no9ta_position = i;
        }
    }

    int hasAtSymbol = (arobas_position != -1);                // '@' must exist
    int dotAfterAt = (no9ta_position > arobas_position + 1);      // '.' must be after '@' with at least one char in between
    int dotNotLast = (no9ta_position < length - 1);          // '.' must not be the last character

    return hasAtSymbol && dotAfterAt && dotNotLast;
}

int validNom(char* nom) {
    for (int i = 0; nom[i] != '\0'; i++) {
        if (!isalpha(nom[i]) && nom[i] != ' ') return 0;
    }
    return 1;
}

void ajouterContact() {
    contacts = realloc(contacts, (n + 1) * sizeof(struct Contact));

    printf("Nom : ");
    do {
        scanf(" %[^\n]", contacts[n].nom);
        if (!validNom(contacts[n].nom)) {
            printf("Erreur: Le nom doit contenir uniquement des lettres et des espaces. Reessayez : ");
        }
    } while (!validNom(contacts[n].nom));

    do {
        printf("Telephone (10 chiffres) : ");
        scanf(" %[^\n]", contacts[n].telephone);
        if (!validNum(contacts[n].telephone)) {
            printf("Erreur: Le numero doit contenir 10 chiffres. Reessayez : ");
        }
    } while (!validNum(contacts[n].telephone));

    do {
        printf("E-mail : ");
        scanf(" %[^\n]", contacts[n].email);
        if (!validEmail(contacts[n].email)) {
            printf("Erreur: L'email doit etre valide. Reessayez : ");
        }
    } while (!validEmail(contacts[n].email));

    n++;
    printf("Contact ajoute avec succes.\n");
}

void afficherContacts() {
    if (n == 0) {
        printf("Aucun contact a afficher.\n");
    } else {
        for (int i = 0; i < n; i++) {
            printf("Nom: %s\n Telephone: %s\n E-mail: %s\n", contacts[i].nom, contacts[i].telephone, contacts[i].email);
        }
    }
}

void modifierContact() {
    char nom[50];
    printf("Nom du contact a modifier : ");
    scanf(" %[^\n]", nom);

    for (int i = 0; i < n; i++) {
        if (strcmp(contacts[i].nom, nom) == 0) {
            printf("Modification du contact %s:\n", contacts[i].nom);

            do {
                printf("Nouveau telephone (10 chiffres) : ");
                scanf(" %[^\n]", contacts[i].telephone);
                if (!validNum(contacts[i].telephone)) {
                    printf("Erreur: Le numero doit contenir 10 chiffres. Reessayez : ");
                }
            } while (!validNum(contacts[i].telephone));

            do {
                printf("Nouvel e-mail : ");
                scanf(" %[^\n]", contacts[i].email);
                if (!validEmail(contacts[i].email)) {
                    printf("Erreur: L'email doit etre valide. Reessayez : ");
                }
            } while (!validEmail(contacts[i].email));

            printf("Contact modifie avec succes.\n");
            return;
        }
    }
    printf("Contact non trouve.\n");
}

void supprimerContact() {
    char nom[50];
    printf("Nom du contact a supprimer : ");
    scanf(" %[^\n]", nom);

    for (int i = 0; i < n; i++) {
        if (strcmp(contacts[i].nom, nom) == 0) {
            printf("Voulez-vous vraiment supprimer ce contact? (oui/non) : ");
            char confirmation[4];
            scanf("%s", confirmation);

            if (strcmp(confirmation, "oui") == 0) {
                for (int j = i; j < n - 1; j++) {
                    contacts[j] = contacts[j + 1];
                }
                contacts = realloc(contacts, (n - 1) * sizeof(struct Contact));
                n--;
                printf("Contact supprime avec succes.\n");
            } else {
                printf("Suppression annulee.\n");
            }
            return;
        }
    }
    printf("Contact non trouve.\n");
}

void rechercherContact() {
    char nom[50];
    printf("Nom du contact a rechercher : ");
    scanf(" %[^\n]", nom);

    for (int i = 0; i < n; i++) {
        if (strcmp(contacts[i].nom, nom) == 0) {
            printf("Nom: %s\n Telephone: %s\n E-mail: %s\n", contacts[i].nom, contacts[i].telephone, contacts[i].email);
            return;
        }
    }
    printf("Contact non trouve.\n");
}

int main() {
    int choix;

    do {
        printf("\n--- Menu ---\n");
        printf("1. Ajouter un contact\n");
        printf("2. Afficher tous les contacts\n");
        printf("3. Modifier un contact\n");
        printf("4. Supprimer un contact\n");
        printf("5. Rechercher un contact\n");
        printf("0. Quitter\n");
        printf("Choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: ajouterContact(); break;
            case 2: afficherContacts(); break;
            case 3: modifierContact(); break;
            case 4: supprimerContact(); break;
            case 5: rechercherContact(); break;
            case 0: printf("Sortie...\n"); break;
            default: printf("Choix invalide.\n");
        }
    } while (choix != 0);

    free(contacts);
    return 0;
}