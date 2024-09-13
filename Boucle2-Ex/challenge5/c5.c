#include <stdio.h>

int main(){
    int n, sum = 0;
    printf("entrez le nombre : ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        sum += i;
        if( i == n){
            printf("%d", i);
        } else {
            printf("%d + ", i);
        }
    }
    printf(" = %d", sum);
}