#include <stdio.h>

int main(){
    int n;
    printf("entrez le nombre des elemnts du tab : ");
    scanf("%d", &n);
    int tab[n];
    printf("entrez les elements du tab :\n");
    for(int i = 0; i < n; i++){
        printf("entrez l'element %d : ", i + 1);
        scanf("%d", &tab[i]);
    }
    int max = tab[0];
    for(int i = 1; i < n; i++){
        if(max < tab[i]){
            max = tab[i];
        }
    }
    printf("le max est : \"%d\"", max);
}