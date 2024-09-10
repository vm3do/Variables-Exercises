#include <stdio.h>

int main(){
    int n;
    printf("entrez le nombre : ");
    scanf("%d", &n);
    if(n % 2 == 0){
        printf("le nombre %d est pair.", n);
    }
    if(n % 2 == 1){
        printf("le nombre %d est impair.", n);
    }
    return 0;
}