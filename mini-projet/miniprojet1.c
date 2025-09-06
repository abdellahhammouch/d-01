#include <stdio.h>
#include <string.h>

int main() 
{
    int i,k,n,Q[100],cmp=0,result,j,som=0,supp=0,livre=0,qsupp[100];
    float P[100],psupp[100];
    char T[100][100],A[100][100],s[100],tsupp[100][100],asupp[100][100];
    do{
        printf("1-Ajouter un Livre au Stock \n");
        printf("2-Afficher Tous les Livres Disponibles \n");
        printf("3-Chercher un Livre \n");
        printf("4-Mettre à Jour la Quantite d'un Livre \n");
        printf("5-Supprimer un Livre du Stock \n");
        printf("6-Afficher le Nombre Total de Livres en Stock \n");
        printf("7-afficher les livres supprimées \n");
        printf("0-Exit \n");
        scanf("%d",&n);
        switch (n) {
            case 0:
                break;

            case 1:
                printf("saisis le nombre des livres que vous voulez ajouter :");
                scanf("%d",&cmp);
                for(i=livre;i<livre+cmp;i++){
                    printf("saisis le titre du livre \n");
                    scanf("%s", T[i]);
                    printf("\n");
                    printf("saisis l'auteur du livre \n");
                    scanf("%s", A[i]);
                    printf("\n");
                    printf("saisis le prix du livre \n");
                    scanf("%f",&P[i]);
                    printf("\n");
                    printf("saisis la quantité \n");
                    scanf("%d",&Q[i]);
                }
                livre+=cmp;
                break;

            case 2:
                if(livre>0){
                printf("les livres existants sont :\n");
                for(i=0;i<livre-supp;i++){
                    printf("%d- %s ,%s ,%.2f ,%d \n",i+1,T[i],A[i],P[i],Q[i]);
                }
                }
                else printf("aucun livre est disponible \n");
                break; 

            case 3:
                printf("saisis le titre du livre :");
                scanf("%s", s);
                for(i=0;i<livre;i++){
                    if(strcmp(T[i], s)==0) {
                        printf("le livre est disponible \n");
                        break;
                    }
                    else{
                        printf("le livre que vous cherchez n'est pas disponible \n");
                        break;
                    }
                }
                break;

            case 4:
                printf("saisis le titre du livre :");
                scanf("%s", s);
                for(i=0;i<livre;i++){
                    if(strcmp(T[i], s)==0) {
                        printf("saisis le nombre des quantités :");
                        scanf("%d",&Q[i]);
                        break;
                    }
                    else{
                        printf("le titre que vous avez entrez ne corespond à aucun de nos livres \n");
                        break; 
                    }
                }
                break;

            case 5:
                printf("saisis le titre du livre que vous voulez supprimer :");
                scanf("%s", s);
                for(i=0;i<livre;i++){
                    if(strcmp(T[i], s)==0) {
                        strcpy(tsupp[supp], T[i]); 
                        strcpy(asupp[supp], A[i]);
                        psupp[supp]=P[i];
                        qsupp[supp]=Q[i];
                        for(j=i;j<livre-1;j++){
                           strcpy(T[j], T[j+1]);
                           strcpy(A[j], A[j+1]);
                           P[j]=P[j+1];
                           Q[j]=Q[j+1];
                           supp++;
                        }  
                        printf("le livre est supprimé \n");
                        break;
                    }
                    else{
                        printf("le titre que vous avez entrez ne corespond à aucun de nos livres \n");
                        break;
                    }
                }
                break;

            case 6:
                printf("Le nombre de nos livres est :%d \n",livre-supp);
                som=0;
                for(i=0;i<livre-supp;i++){
                    som=som+Q[i];
                }
                printf("le nombre total des quantitées de nos livres en stock est %d \n",som);
                break;
             case 7:
                if(supp>0){
                    printf("Les livres supprimés sont :\n");
                    for(i=0;i<supp;i++){
                     printf("-%s ,%s ,%.2f ,%d \n",tsupp[i],asupp[i],psupp[i],qsupp[i]);
                    }
                    break;
                }
                else{
                    printf("Aucun livre est supprimé \n");
                    break;
                }
            
            default: 
                printf("le nombre que vous avez entrez n'est pas disponible sur le menu! \n");
        }   
    }while(n!=0);
}