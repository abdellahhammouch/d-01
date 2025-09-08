#include <stdio.h>
#include <string.h>

struct contact{
    char numero[100];
    char adresse[100];
    char nom[100];
};

int main() {
    int cmp=0,i,choix,j,supp=0;
    char search[100];
    struct contact contacts[100];
    struct contact sup[100];

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
            printf("saisis le nom du contact :");
            scanf("%s", contacts[cmp].nom);

            printf("saisis le numero du contact :\n");
            scanf("%s", contacts[cmp].numero);

            printf("saisis l'email du contact :\n");
            scanf("%s", contacts[cmp].adresse);

            cmp++;
            break;
        case 2:
            printf("saisis le nom du contact à modifier :");
                scanf("%s", search);
                for(i=0;i<cmp;i++){
                    if(strcmp( contacts[i].nom, search)==0) {
                        printf("saisis le nouveau nom du contact :");
                        scanf("%s", contacts[i].nom);

                        printf("saisis le nouveau numero du contact :\n");
                        scanf("%s", contacts[i].numero);

                        printf("saisis le nouveau email du contact :\n");
                        scanf("%s", contacts[i].adresse);
                        break;

                    }
                    else{
                        printf("Vous vous etes tromper de contact \n");
                        break;
                    }    
                }
            break;
        case 3:
            printf("saisis le nom du contact à supprimer :");
                scanf("%s", search);
                for(i=0;i<cmp;i++){
                    if(strcmp(contacts[i].nom, search)==0) {
                        strcpy( sup[supp].nom, contacts[i].nom); 
                        strcpy( sup[supp].numero, contacts[i].numero); 
                        strcpy( sup[supp].adresse, contacts[i].adresse);
                        supp++;
                        for(j=i;j<cmp-1;j++){
                            strcpy(contacts[j].nom, contacts[j+1].nom);
                            strcpy(contacts[j].numero, contacts[j+1].numero);
                            strcpy(contacts[j].adresse, contacts[j+1].adresse);
                           
                        }  
                        strcpy( contacts[j].nom,sup[supp].nom); 
                        strcpy( contacts[j].numero,sup[supp].numero); 
                        strcpy( contacts[j].adresse, sup[supp].adresse);
                        printf("le contact a été supprimer avec succés \n");
                        break;
                    }
                    else{
                        printf("le contact que vous avez entrez n'existe pas \n");
                        break;
                    }
                }
            break;
        case 4: 

            printf("\n--- Liste des contacts (%d) ---\n", cmp);
            for (i=0; i<cmp-supp; i++) {
                printf("\nContact %d :\n", i+1);
                printf("Nom : %s\n",contacts[i].nom);
                printf("Téléphone : %s\n",contacts[i].numero);
                printf("Email : %s\n",contacts[i].adresse);
            }
            break;
        case 5:
            printf("saisis le nom du contact à rechercher :");
                scanf("%s", search);
                for(i=0;i<cmp;i++){
                    if(strcmp( contacts[i].nom, search)==0) {
                       printf("le contact existe \n");
                        break;

                    }
                    else{
                        printf("Le contact n'existe pas \n");
                        break;
                    }    
                }
            break;
        default:
            break;
        }

    } while(choix!=0);
    

}