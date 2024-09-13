#include <stdio.h>

int paritfunc(int n){
    if(n % 2 == 0){
        return 0;
    } else {
        return 1;
    }
}
int main(){
    int n;
    printf("entrez le nombre : ");
    scanf("%d", &n);
    printf("%d", paritfunc(n));
}