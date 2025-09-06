#include <stdio.h>
#include <string.h>

int main() {
    char chaine1[100],chaine2[100];

    printf("Entrez la 1 ère chaîne de caractères : ");
    fgets(chaine1, 100, stdin);
    printf("Entrez la 2 ème  chaîne de caractères : ");
    fgets(chaine2, 100, stdin);
    if(strcmp(chaine1, chaine2)==0){
        printf("les chaines sont similaire");
    }
    else
    printf("les chaines sont différentes");
    
    return 0;
}