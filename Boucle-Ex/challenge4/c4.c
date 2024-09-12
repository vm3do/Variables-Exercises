#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("entrez le nombre : ");
    scanf("%d", &n);
    for(int i = 1; i <= n ;) {
        sum += 1;
        if(sum % 2 != 0) { 
            printf(" %d", sum);
            i++;
        }
    }
    return 0;
}