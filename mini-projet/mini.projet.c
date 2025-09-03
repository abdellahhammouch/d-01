#include <stdio.h>
#include <string.h>

int main() 
{
    int i=0,n,Q[100],cmp=0,result;
    float P[100];
    char T[100],A[100];

    do{
        printf("1-Ajouter un Livre au Stock \n");
        printf("2-Afficher Tous les Livres Disponibles \n");
        printf("3-Mettre à Jour la Quantité d'un Livre \n");
        printf("4-Supprimer un Livre du Stock \n");
        printf("5-Afficher le Nombre Total de Livres en Stock \n");
        scanf("%d",&n);
        switch (n) {
            case 0:
        
                break;
            case 1:
                printf("saisis le titre du livre \n");
                scanf("%s",T[cmp]);
                printf("\n");
                printf("saisis l'auteur du livre \n");
                scanf("%s",A[cmp]);
                printf("\n");
                printf("saisis le prix du livre \n");
                scanf("%f",P[cmp]);
                printf("\n");
                printf("saisis la quantité \n");
                scanf("%d",Q[cmp]);
                cmp++;
                break;

            case 2:
                printf("les livres existants sont :\n");
                for(i=0;i<cmp;i++){
                    printf("%d-%s,%s,%f,%d \n",i+1,T[i],A[i],P[i],Q[i]);
                }
                break; 
            case 3:
                
                break;

            case 4:
        
                break;
            case 5:
        
                break; 


            default: 
        
                break; 
}
    }while(i!=0);
    
    printf("saisis les valeurs du tableau :");
    for(i=0;i<n;i++){
        scanf("%d",&T[i]);
    }
    for(i=0;i<n;i++){
        printf("T[%d]=%d \n",i+1,T[i]);
    }   
}