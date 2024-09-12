#include <stdio.h>

int main(){
        int n, i;
    printf("entrez le nombre des elemnts du tab : ");
    scanf("%d", &n);
    int tab[n];
    printf("entrez les elements du tab :\n");
    for(i = 0; i < n; i++){
        printf("entrez l'element %d : ", i + 1);
        scanf("%d", &tab[i]);
    }
    printf("les element du tab inverse sont : ");
    for(i = n - 1; i >= 0; i--){
        printf("%d ", tab[i]);
    }
    return 0;

}