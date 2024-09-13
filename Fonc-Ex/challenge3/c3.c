#include <stdio.h>
void maxfunc(int a, int b){
    if(a > b){
        printf("le max est %d", a);
    } else {
        printf("le max est %d", b);
    }
}
int main(){
    int a, b;
    printf("entrez le premier nombre : ");
    scanf("%d", &a);
    printf("entrez le deuxieme nombre : ");
    scanf("%d", &b);
    maxfunc(a,b);
    return 0;
}