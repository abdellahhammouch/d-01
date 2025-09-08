#include <stdio.h>

struct {
    char auteur;
    char titre;
    int annee;
}typedef livre;

livre input(livre livres[],int a){

        printf("saisis le titre du livre :");
        scanf("%s", livres[a].titre);
        printf("saisis l'auteur du livre :");
        scanf("%s", livres[a].auteur);
        printf("saisis l'annee du livre :");
        scanf("%d", livres[a].annee);

    return livres [a];
}
int main(){
    livre livres[10];
    int i=0,j,cmp=0,choix;
    livre x[10];
    do{
        x[cmp]=input(livres,i);
        printf("vous voulez entrer un nouveau livre ? (1=oui || 0=non ) \n");
        scanf("%d",&choix);
        cmp++;
    }while(choix=0);
    printf("les livres saisis sont :\n");
    for(j=0;j<cmp;j++){
        printf("livre %d : \n");
        printf("titre : %s \t auteur :%s \t annee : %d \n", x[j].titre,x[j].auteur,x[j].annee );
       
    }
    

}