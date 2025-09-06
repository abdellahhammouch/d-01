#include <stdio.h>

int main() {
    int i,n=0;
    char a,chaine[100];

    printf("Entrez une chaîne de caractères : ");
    fgets(chaine, 100, stdin);

    while (chaine[n]!='\0' && chaine[n]!='\n') {
        n++;
    }

    for (i=0;i<n/2;i++) {
        a=chaine[i];
        chaine[i]=chaine[n-1-i];
        chaine[n-1-i]=a;
    }
    printf("La chaine inversée : %s",chaine);
    return 0;
}