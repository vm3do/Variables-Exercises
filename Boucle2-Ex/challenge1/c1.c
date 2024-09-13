#include <stdio.h>

int main(){
    int n;
    printf("entrez le nombre : ");
    scanf("%d", &n);
    for(int i = 10; i > 0; i--){
        printf(" %d * %d = %d\n", n, i, i*n);
    }
    return 0;
}