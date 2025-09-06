#include <stdio.h>
#include <string.h>

int main() {
    int i,n=0;
    char a,chaine[100];

    printf("Entrez une chaîne de caractères : ");
    fgets(chaine, 100, stdin);
    do{
        n=0;
        for(i=strcspn(chaine, " ");i<strlen(chaine)-1;i++){
            chaine[i]=chaine[i+1];
            n++;
    }
    }while(n>0);
    printf("Votre chaine sans espace :%s",chaine);
    
    return 0;
}