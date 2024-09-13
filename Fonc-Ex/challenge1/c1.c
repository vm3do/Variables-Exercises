#include <stdio.h>
void sumfunc(int a, int b){
    printf("%d + %d = %d", a, b, a + b);
}
int main(){
    int a, b;
    printf("entrez le premier nombre : ");
    scanf("%d", &a);
    printf("entrez le deuxieme nombre : ");
    scanf("%d", &b);
    sumfunc(a,b);
    return 0;
}