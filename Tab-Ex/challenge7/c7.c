#include <stdio.h>

int main(){
    int n, temp;
    printf("entrez le nombre des elemnts du tab : ");
    scanf("%d", &n);
    int tab[n];
    printf("entrez les elements du tab :\n");
    for(int i = 0; i < n; i++){
        printf("entrez l'element %d : ", i + 1);
        scanf("%d", &tab[i]);
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(tab[j] > tab[j+1]){
                temp = tab[j];
                tab[j] = tab[j +1];
                tab[j + 1] = temp;
            }
        }
    }
    printf("les element du tab en ordre croissant : \n");
    for(int i = 0; i < n; i++){
        printf("%d ", tab[i]);
    }
}