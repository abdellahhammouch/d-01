#include <stdio.h>

void inverser_chaine(char chaine[]) {
    int i,n=0;
    char a;

    while (chaine[n]!='\0') {
        n++;
    }

    for (i=0;i<n/2;i++) {
        a=chaine[i];
        chaine[i]=chaine[n-1-i];
        chaine[n-1-i]=a;
    }
}

int main() {
    char chaine[100];

    printf("Entrez une chaîne : ");
    scanf("%s", chaine); 
    printf("Votre chaîne : %s\n", chaine);
    inverser_chaine(chaine);
    printf("Votre chaîne inversée : %s\n", chaine);

    return 0;
}