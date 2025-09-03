#include <stdio.h>

int main() 
{
    int i,n,T[100],j,s;
    printf("saisis la dimension  du tableau :");
    scanf("%d",&n);
    printf("saisis les valeurs du tableau :");
    for(i=0;i<n;i++){
        scanf("%d",&T[i]);
        s=s+T[i];
    }
    printf("la somme du tableau est : %d",s);  
}