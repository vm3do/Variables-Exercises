#include <stdio.h>

int main(){
    int n;
    int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int taille = sizeof(tab)/4;
    int debut = 0;
    int fin = taille - 1; //we can say fin = 10 hitach tab fih 10 element
    printf("entrez le nombre a rechercher : ");
    scanf("%d", &n);
    while(debut <= fin){
        int mid = ( debut + fin ) / 2;
        if(tab[mid] == n){
            printf("l'element %d est trouve!", n);
            return 0;
        } else if(tab[mid] < n){
                fin = mid - 1;
        } else if(tab[mid] > n){
            debut = mid + 1;
        }
    }
    printf("l'element %d est pas trouve!", n);
    return 0;
}