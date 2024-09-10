#include <stdio.h>

int main() {
    int day, month, year;
    char monthName[10];

    printf("Entrez une date au format jj/mm/aaaa : ");
    scanf("%d/%d/%d", &day, &month, &year);

    switch (month) {
        case 1: strcpy(monthName, "Janvier"); break;
        case 2: strcpy(monthName, "Fevrier"); break;
        case 3: strcpy(monthName, "Mars"); break;
        case 4: strcpy(monthName, "Avril"); break;
        case 5: strcpy(monthName, "Mai"); break;
        case 6: strcpy(monthName, "Juin"); break;
        case 7: strcpy(monthName, "Juillet"); break;
        case 8: strcpy(monthName, "Aout"); break;
        case 9: strcpy(monthName, "Septembre"); break;
        case 10: strcpy(monthName, "Octobre"); break;
        case 11: strcpy(monthName, "Novembre"); break;
        case 12: strcpy(monthName, "Decembre"); break;
        default: strcpy(monthName, "Invalide"); break;
    }
    printf("%02d-%s-%d\n", day, monthName, year);
    return 0;
}
