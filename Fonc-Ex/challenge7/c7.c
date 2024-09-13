#include <stdio.h>
void revfunc(char str[]){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    int start = 0;
    int end = i - 1;
    while(start < end){
        int temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main(){
    char str[100];
    printf("entrez la chaine : ");
    scanf("%[^\n]", &str );
    revfunc(str);
    printf("chaine inversee est : %s", str);
    return 0;
}