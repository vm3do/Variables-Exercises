#include <stdio.h>

void fibofunc(int n){
    int a = 0, b = 1, suivant = a + b;
    if (n <= 0) {
        printf("Veuillez entrer un nombre positif.\n");
        return ;
    }
    if(n == 1){
         printf("le %deme element de fibonacci est : %d", n, a);
    } else if(n == 2){
         printf("le %deme element de fibonacci est : %d", n, b);
         }
    for(int i = 3; i <= n; i++){
        suivant = a + b;
         if(i == n) {
            printf("le %deme element de fibonacci est : %d", n, suivant);
        }
        a = b;
        b = suivant;
    }

}
int main(){
    int n;
    printf("entrez le nombre : ");
    scanf("%d", &n);
    fibofunc(n);
    return 0;
}