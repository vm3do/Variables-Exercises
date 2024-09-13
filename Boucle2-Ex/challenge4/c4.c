#include <stdio.h>

int main(){
    int n, num = 0;
    printf("entrez le nombre : ");
    scanf("%d", &n);

    while(n != 0){
        num =  num * 10 + n % 10;
        n /= 10;
    }
    printf("le nombre en inverse est : %d", num);
    return 0;
}