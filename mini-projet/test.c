#include <stdio.h>
#include <string.h>

struct contact{
    char numero[100];
    char email[100];
    char nom[100];
};

int main() {
    int cmp=0,i,choix;
    struct contact contacts[100];

    do{
        printf("\n--- Menu  ---\n");
        printf("1-Ajouter un contact \n");
        printf("2-Modifier un contact \n");
        printf("3-Supprimmer un contact \n");
        printf("4-Afficher tous les contacts \n");
        printf("5-Rechercher un contact \n");
        printf("0-Exit \n");
        scanf("%d",&choix);
        switch (choix)
        {
        case 0:
            break;
        case 1:
            printf("Entrez le nom : ");
            fgets(contacts[cmp].nom, sizeof(contacts[cmp].nom), stdin);
            contacts[cmp].nom[strcspn(contacts[cmp].nom, "\n")] = '\0';

            printf("Entrez le numéro de téléphone : ");
            fgets(contacts[cmp].numero, sizeof(contacts[cmp].numero), stdin);
            contacts[cmp].numero[strcspn(contacts[cmp].numero, "\n")] = '\0';

            printf("Entrez l'adresse e-mail : ");
            fgets(contacts[cmp].email, sizeof(contacts[cmp].email), stdin);
            contacts[cmp].email[strcspn(contacts[cmp].email, "\n")] = '\0';

            cmp++;
            break;
        case 4: 
         printf("\n--- Liste des contacts (%d) ---\n", cmp);
        for (i=0; i<cmp; i++) {
            printf("\nContact %d :\n", i+1);
            printf("Nom : %s\n", contacts[cmp].nom);
            printf("Téléphone : %s\n", contacts[cmp].numero);
            printf("Email : %s\n", contacts[cmp].email);
        }
        break;

        default:
            break;
        }

    } while(choix!=0);
    

}