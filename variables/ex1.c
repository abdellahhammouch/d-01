#include <stdio.h>

int main() {
    char nom[50],sexe,email[100],prenom[50];
    int age;
    printf("Entrez votre prénom : ");
    scanf("%s", prenom);
    printf("Entrez votre nom : ");
    scanf("%s", nom);
    printf("Entrez votre âge : ");
    scanf("%d", &age);
    printf("Entrez votre sexe (M/F) : ");
    scanf(" %c", &sexe);  
    printf("Entrez votre adresse email : ");
    scanf("%s", email);
    printf("\nVos Informations Personnelles \n");
    printf("Prénom : %s\n", prenom);
    printf("Nom    : %s\n", nom);
    printf("Âge    : %d\n", age);
    printf("Sexe   : %c\n", sexe);
    printf("Email  : %s\n", email);

}