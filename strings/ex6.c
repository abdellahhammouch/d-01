#include <stdio.h>
#include <string.h>

int main() {
    int i,n=0;
    char a,chaine[100];

    printf("Entrez une chaîne de caractères : ");
    fgets(chaine, 100, stdin);
    printf("saisis un caractere :");
    scanf("%c",&a);

    for(i=0;i<strlen(chaine);i++){
        if(chaine[i]==a){
            n++;
        }
    }
    if(n>0){
        printf("Votre caractere est apparait %d fois",n);
    }
    else
    printf("le caractere que vous avez entrez n'apparait aucune fois dans votre chaine");
    
    return 0;
}