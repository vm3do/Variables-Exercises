#include <stdio.h>

int main(){
    int n, a = 0, b = 1, suivant;
    printf("entrez le nombre : ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Veuillez entrer un nombre positif.\n");
        return 1;
    }
    for(int i = 1; i <= n; i++){
        if(i == 1){
            printf("%d", a);
        } else if(i == 2){
            printf(", %d", b);
        } else {
            suivant = a + b;
            printf(", %d", suivant);
            a = b;
            b = suivant;
        }
    }
    return 0;
}