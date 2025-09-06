
#include <stdio.h>
#include <string.h>

int main() {
    char chaine1[100],chaine2[100];

    printf("Entrez une chaîne de caractères : ");
    fgets(chaine1, 100, stdin);
    chaine1[strcspn(chaine1, "\n") ]='\0';
    printf("Entrez la 2 ème  chaîne de caractères : ");
    fgets(chaine2, 100, stdin);
    strcat(chaine1, chaine2);
    printf("La chaine résultante est : %s\n", chaine1);

    return 0;
}