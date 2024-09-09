#include <stdio.h>

int main(){
    int C;
    printf("entrez la temperature en Celsius : ");
    scanf("%d", &C);
    if(C < 0){
        printf("l'etat de l'eau a cette temperature est : \"Solide\"");
    }
    else if(0 <= C && C < 100){
        printf("l'etat de l'eau a cette temperature est : \"Liquide\"");
    }
    else {
        printf("l'etat de l'eau a cette temperature est : \"Gaz\"");
    }
    
    return 0;
}