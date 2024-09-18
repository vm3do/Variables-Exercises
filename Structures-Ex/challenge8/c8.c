#include <stdio.h>

struct cercle{
    int rayon;
};

const float pi = 3.14;

float misa7a(struct cercle cercle1){
    return cercle1.rayon * cercle1.rayon * pi;
}

int main(){
    struct cercle cer1;

    printf("entrez le rayon : ");
    scanf("%d", &cer1.rayon);

    printf("l'aire du cercle est : %.2f\n", misa7a(cer1));
    
    return 0;
}