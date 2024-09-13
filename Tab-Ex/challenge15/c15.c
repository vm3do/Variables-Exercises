#include <stdio.h>

int main() {
    int n1, n2, i;
    float sum = 0.0;
    printf("Entrez le nombre des elements du tab 1 : ");
    scanf("%d", &n1);
    int tab1[n1];
    
    printf("Entrez les elements du tab 1 : \n");
    for(i = 0; i < n1; i++) {
        printf("Entrez l'element %d : ", i+1);
        scanf("%d", &tab1[i]);
    }
    printf("Entrez le nombre des elements du tab 2 : ");
    scanf("%d", &n2);
    int tab2[n2];
    
    printf("Entrez les elements du tab 2 : \n");
    for(i = 0; i < n2; i++) {
        printf("Entrez l'element %d : ", i+1);
        scanf("%d", &tab2[i]);
    }
    int tab3[n1 + n2];
    for(i = 0; i < n1; i++){
            tab3[i] = tab1[i];
    }
    for(i = 0;i < n2; i++){
            tab3[n1 + i] = tab2[i];
    }

    printf("le noveau tab est : ");
    for(i = 0; i < n1 + n2; i++){
        printf("%d ", tab3[i]);
    }
    return 0;
}