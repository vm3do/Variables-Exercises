#include <stdio.h>

int main()
{
    int n, det = 0;
    printf("entrez le nombre : ");
    scanf("%d", &n);
    if(n <= 1){
        printf("le nombre doit etre > 1");
        return 1;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i % j == 0)
            {
                det++;
            }
        }
        if (det == 2)
        {
            printf("le nombre %d est premier\n", i);
        }
        det = 0;
    }
    return 0;
}