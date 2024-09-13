#include <stdio.h>
void minfunc(int a, int b){
    if(a < b){
        printf("le min est %d", a);
    } else {
        printf("le min est %d", b);
    }
}
int main(){
    int a, b;
    printf("entrez le premier nombre : ");
    scanf("%d", &a);
    printf("entrez le deuxieme nombre : ");
    scanf("%d", &b);
    minfunc(a,b);
    return 0;
}