#include <stdio.h>
#include <string.h>

int main() {
    int i,n=0;
    char a,chaine[100];

    printf("Entrez une chaîne de caractères : ");
    fgets(chaine, 100, stdin);
   
    printf("Votre chaine en majiscule :%s",strupr(chaine));
    
    return 0;
}