#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("entrez le premier nombre : ");
    scanf("%d", &a);
    printf("entrez le deuxieme nombre : ");
    scanf("%d", &b);
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    if (b != 0)
    {
        printf("%d / %d = %d\n", a, b, a / b);
    }
    else
    {
        printf("le deuxieme nombre ne doit pas etre 0\n");
        printf("entrez le deuxieme nombre : ");
        scanf("%d", &b);
        if (b == 0)
        {
            printf("Vous n'avez pas suivi les instructions.");
        }
        else
        {
            printf("%d / %d = %d\n", a, b, a / b);
        }
    }
    return 0;
}