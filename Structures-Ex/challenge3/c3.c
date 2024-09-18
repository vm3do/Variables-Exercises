#include <stdio.h>

struct rect{
    int longueur;
    int largeur;
};

int aire(struct rect rect1){
    return rect1.longueur * rect1.largeur;
}
int main(){
    struct rect recto;
    printf("entrez le largeur : ");
    scanf("%d", &recto.largeur);

    printf("entrez le longeur : ");
    scanf("%d", &recto.longueur);

    printf("l'aire de cette rectangle est %d", aire(recto));
    
    return 0;
}