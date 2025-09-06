#include <stdio.h>

int main() 
{
    int i,n,T[100],max;
    printf("saisis la dimension  du tableau :");
    scanf("%d",&n);
    printf("saisis les valeurs du tableau :");
    for(i=0;i<n;i++){
        scanf("%d",&T[i]);
    }
    for(i=1;i<n;i++){
        if(max<T[i])
            max=T[i];
    }
    printf("le maximum du tableau est : %d",max);
}