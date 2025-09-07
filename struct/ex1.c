#include <stdio.h>

struct personnes{
    int age;
    char nom[100];
    char prénom[100];
};

int main() {
    
    struct personnes p1;
    
    printf("saisis ton prénom :");
    fgets(p1.prénom, 100, stdin);

    printf("saisis ton nom :");
    fgets(p1.nom, 100, stdin);

    printf("saisis ton age :");
    scanf("%d",&p1.age);

    printf("Votre informations entrées : \n");
    printf("%s", p1.prénom);
    printf("%s",p1.nom);
    printf("%d ",p1.age);  

}