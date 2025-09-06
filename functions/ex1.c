#include <stdio.h>
int somme(int a,int b){
    int som; 
    som=a+b;
    return som;
}
int main() 
{
    int a,b,som;
    printf("saisis la valeur de a :");
    scanf("%d",&a);
    printf("saisis la valeur de b :");
    scanf("%d",&b);
    som=somme(a,b);
    printf("%d+%d=%d",a,b,som);
    
}