#include <stdio.h>

int main() 
{
    int i,n,T[100];
    printf("saisis la dimension  du tableau :");
    scanf("%d",&n);
    printf("saisis les valeurs du tableau :");
    for(i=0;i<n;i++){
        scanf("%d",&T[i]);
    }
    for(i=0;i<n;i++){
        printf("T[%d]=%d \n",i+1,T[i]);
    }   
}