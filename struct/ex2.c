#include <stdio.h>

struct etudiant{
    int notes[100];
    char nom[100];
    char prenom[100];
};

int main() {
    int i,n,nt=0,j;

    struct etudiant e1[100];
    printf("saisis le nombre des etudiants :");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("saisis ton prenom :");
        scanf("%s", e1[i].prenom);

        printf("saisis ton nom :");
        scanf("%s", e1[i].nom);
        if(nt==0){
            printf("saisis le nombres des notes pour cet étudiant :\n");
            scanf("%d",&nt);
        }
        for(j=0;j<nt;j++){
            printf("saisis la note %d :",j+1);
            scanf("%d",&e1[i].notes[j]);
        }
        
    }
    
    printf("Votre informations entrées : \n");
    for (i=0;i<n;i++){
        printf("%s \t", e1[i].prenom);
        printf("%s \t",e1[i].nom);
        printf("les notes de l'etudiant %d sont :\n",i+1);
        for(j=0;j<nt;j++){
            printf("%d \t",e1[i].notes[j]);
        } 
    }
}