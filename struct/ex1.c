#include <stdio.h>

struct personnes{
    int age;
    char nom[100];
    char prenom[100];
};

int main() {
    int i,n;

    struct personnes p1[100];
    printf("saisis le nombre des personnes :");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        
        printf("saisis ton prenom :");
        scanf("%s", p1[i].prenom);

        printf("saisis ton nom :");
        scanf("%s", p1[i].nom);

        printf("saisis ton age :");
        scanf("%d",&p1[i].age);
        
    }
    
    printf("Votre informations entrées : \n");
    for (i=0;i<n;i++){
        printf("%s \t", p1[i].prenom);
        printf("%s \t",p1[i].nom);
        printf("%d \n",p1[i].age); 
    }
}