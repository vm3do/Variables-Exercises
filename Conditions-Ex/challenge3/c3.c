#include <stdio.h>

int main(){
    int a, b;
    printf("entrez la premiere valeur : ");
    scanf("%d", &a);
    printf("entrez la premiere valeur : ");
    scanf("%d", &b);
    if(a == b){
        printf("( %d + %d ) * 3 = %d", a, b, (a + b) * 3);
    }
    printf("%d + %d = %d", a, b, a + b);
}