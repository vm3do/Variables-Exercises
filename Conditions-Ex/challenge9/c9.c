#include <stdio.h>

int main() {
    char c;

    printf("Entrez un caractere : ");
    scanf("%c", &c);

    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        if (c >= 'A' && c <= 'Z') {
            printf("Le caractere '%c' fait partie des alphabets et il est majuscule.\n", c);
        } else {
            printf("Le caractere '%c' fait partie des alphabets et il est minuscule.\n", c);
        }
    } else {
        printf("Le caractere '%c' ne fait pas partie des alphabets.\n", c);
    }
    return 0;
}