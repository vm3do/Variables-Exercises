#include <stdio.h>

void factofunc(int n){
    int facto = 1;
    if(n <= 0){
        printf("le nombre doit etre positif!");
        return;
    }
    for(int i = 1; i <= n; i++){
        facto *= i;
    }
    printf("le facto de %d est : %d", n, facto);
}
int main(){
    int n;
    printf("entrez le nombre : 5");
    scanf("%d", &n);
    factofunc(n);
    return 0;
}