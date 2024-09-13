#include <stdio.h>

int main(){
    int n, sum = 0;
    printf("entrez le nombre : ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            if(n == i){
                printf("%d", i);
            } else {
                printf("%d, ", i);
            }
        }
    }
    return 0;
}