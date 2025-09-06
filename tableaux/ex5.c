#include <stdio.h>

int main(){

    int i,n,T[100],min;
    printf("saisis la dimension  du tableau :");
    scanf("%d",&n);
    printf("saisis les valeurs du tableau :");
    for(i=0;i<n;i++){
        scanf("%d",&T[i]);
    }
    min=T[0];
    for(i=1;i<n;i++){
        if(min>T[i])
            min=T[i];
    }
    printf("le minimum du tableau est : %d",min);
}