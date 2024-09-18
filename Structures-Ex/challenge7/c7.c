#include <stdio.h>
#include <stdlib.h>

struct date {
    int jour;
    int mois;
    int annee;
};

int main() {
    struct date *date_ptr = malloc(sizeof(struct date));
    
    if (date_ptr == NULL) {
        printf("Erreur d'allocation de memoire !");
        return 1;
    }

    printf("Entrez le jour : ");
    scanf("%d", &date_ptr->jour);

    printf("Entrez le mois : ");
    scanf("%d", &date_ptr->mois);

    printf("Entrez l'annee : ");
    scanf("%d", &date_ptr->annee);

    printf("date : %d/%d/%d\n", date_ptr->jour, date_ptr->mois, date_ptr->annee);

    free(date_ptr);

    return 0;
}