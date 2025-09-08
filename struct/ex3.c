#include <stdio.h>

struct rectangle{
    int longueur;
    int largeur;
};
int air( struct rectangle r1){
    return r1.largeur * r1.longueur;
}

int main(){
    struct rectangle r1;
    printf("entrez la longueur du rectangle :");
    scanf("%d",&r1.longueur);
    
    printf("entrez la longueur du rectangle :");
    scanf("%d",&r1.largeur);
    
    printf("l'air de ce rectangle est :%d",air(r1));

}