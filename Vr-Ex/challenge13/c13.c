#include <stdio.h>
int main(){
    int n;
    printf("entrez le nombre en dicimale : ");
    scanf("%d", &n);
    printf("le nombre %d en hexadecimal est : %x\n", n, n);
    printf("le nombre %d en binaire est : ", n);
    if( n == 0){
        printf("0");
        return 0;
    }
    while(n > 0){
        printf("%d", n % 2);
        n = n / 2;
    }
    return 0;
}