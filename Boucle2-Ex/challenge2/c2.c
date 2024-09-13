#include <stdio.h>

int main(){
    int ligne;
    printf("entrez le nombre des lignes : ");
    scanf("%d", &ligne);
    int space = ligne - 1;
    int stars = 1;
    for(int i = 1; i <= ligne; i++){
        for(int j = 1; j <= space; j++){
            printf(" ");
        }
        for(int k = 1; k <= stars; k++){
            printf("*");
        }
        printf("\n");
        space --; 
        stars += 2;       
        }
}