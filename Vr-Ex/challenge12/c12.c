#include <stdio.h>

int main(){
int n;
printf("entrez un nombre entier à quatre chiffres : ");
scanf("%d", &n);
if( n < 1000 || n > 9999){
    printf("le nombre doit etre en quatre chiffres!");
    return 1;
}
int a = n % 10;
int b = (n / 10) % 10;
int c = (n / 100) % 10;
int d = (n / 1000) % 10;
printf("les chiffres dans l'ordre inverse sont : \"%d%d%d%d\"", a, b, c, d);
return 0;
}