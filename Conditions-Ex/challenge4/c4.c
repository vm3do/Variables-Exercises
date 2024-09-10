#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c;
    double delta, sol1, sol2;
    printf("entrez le premier nombre \"a\" : ");
    scanf("%lf", &a);
    if( a == 0 ){
        printf("le premier nombre \"a\" ne doit pas etre 0.");
        return 1;
    }
    printf("entrez le deuxieme nombre \"b\" : ");
    scanf("%lf", &b);
    printf("entrez le troisieme nombre \"c\" : ");
    scanf("%lf", &c);
    delta = (b * b) - (4 * a * c);
    if(delta < 0){
        printf("il n'y a pas de solution réelle.");
    } else if(delta > 0){
        printf("il y a deux solutions.\n");
        sol1 =  (-b + sqrt(delta)) / (2 * a);
        sol2 =  (-b - sqrt(delta)) / (2 * a);
        printf("la solution 1 est : %.2f\n", sol1);
        printf("la solution 2 est : %.2f\n", sol2);
    } else {
        printf("il y a une seule solutions.\n");
        sol1 =  -b / ( 2 * a );
        printf("la solution est : %.2f", sol1);
    }
    return 0;
}