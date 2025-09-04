#include <stdio.h>
#include <string.h>

int main() 
{
    int i,n,Q[100],cmp,result,j,som=0;
    float P[100];
    char T[100],A[100],s[1],aide[50];
    cmp=0;
    do{
        printf("1-Ajouter un Livre au Stock \n");
        printf("2-Afficher Tous les Livres Disponibles \n");
        printf("3-Mettre à Jour la Quantite d'un Livre \n");
        printf("4-Supprimer un Livre du Stock \n");
        printf("5-Afficher le Nombre Total de Livres en Stock \n");
        printf("0-Exit \n");
        scanf("%d",&n);
        switch (n) {
            case 0:
                break;
            case 1:
                printf("saisis le titre du livre \n");
                scanf("%s",&T[cmp]);
                printf("\n");
                printf("saisis l'auteur du livre \n");
                scanf("%s",&A[cmp]);
                printf("\n");
                printf("saisis le prix du livre \n");
                scanf("%f",&P[cmp]);
                printf("\n");
                printf("saisis la quantité \n");
                scanf("%d",&Q[cmp]);
                cmp=cmp+1;
                break;

            case 2:
                if(cmp>0){
                printf("les livres existants sont :\n");
                for(i=0;i<cmp;i++){
                    printf("%d- %s ,%s ,%f ,%d \n",i+1,T[i],A[i],P[i],Q[i]);
                }
                }
                else printf("aucun livre est disponible \n");
                break; 
            case 3:
                printf("saisis le titre du livre :");
                scanf("%s", s[1]);
                for(i=0;i<cmp;i++){
                    aide[i]=T[i];
                    if(strcmp(s, aide)==0) {
                        printf("saisis le nombre des quantités :");
                        scanf("%d",&Q[i]);
                    }
                    else    printf("le titre que vous avez entrez ne corespond à aucun de nos livres \n");
                }
                break;

            case 4:
                printf("saisis le titre du livre que vous voulez supprimer :");
                scanf("%s",s[1]);
                 for(i=0;i<cmp;i++){
                    aide[i]=T[i];
                    if(strcmp(s, aide)==0) {
                        for(j=i;i<cmp-1;j++){
                           T[j]=T[j+1];
                           A[j]=A[j+1];
                           P[j]=P[j+1];
                           Q[j]=Q[j+1];
                        }   
                    }
                    else    printf("le titre que vous avez entrez ne corespond à aucun de nos livres \n");
                }
                break;
            case 5:
                printf("%d",cmp);
                som=0;
                for(i=0;i<cmp;i++){
                    som=som+Q[i];
                }
                printf("le nombre total des livres est %d \n",som);
                break; 


            default: 
                printf("le nombre que vous avez entrez n'est pas disponible sur le menu!");
        }   
    }while(n!=0);

}