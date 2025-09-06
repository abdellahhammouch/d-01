#include <stdio.h>
#include <string.h>

int main() {
    char chaine[100];
    char souschaine[100];

    printf("Entrez la chaîne principale : ");
    fgets(chaine, 100, stdin);
    chaine[strcspn(chaine, "\n")] = '\0';
    printf("Entrez la sous-chaîne à rechercher : ");
    fgets(souschaine, 100, stdin);
    souschaine[strcspn(souschaine, "\n")] = '\0'; 
    if (strstr(chaine, souschaine) != 0) {
        printf("La sous-chaîne %s est présente dans la chaîne principale.\n", souschaine);
    } 
    else 
        printf("La sous-chaîne %s n'est pas présente dans la chaîne principale.\n", souschaine);

    return 0;
}