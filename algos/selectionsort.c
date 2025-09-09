#include <stdio.h>

void main(){
    int n,i,j,cmp,min,t,temp;
    printf("saisis la taille du tableau :\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("sasis l'element %d :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("le tableau avant le trier : \n");
    for(i=0;i<n;i++){
        printf("%d \t",arr[i]);
    }
    for(i=0;i<n;i++){
        cmp=0;
        min=arr[i];
        for(j=i+1;j<n;j++){
            if(min>arr[j]){
                temp=j;
                min=arr[j];
                cmp++;
            }
        }
        if(cmp>0){
            t=arr[temp];
            arr[temp]=arr[i];
            arr[i]=t;
        }
    }
    printf("\nle tableau trié est : \n");
    for(i=0;i<n;i++){
        printf("%d \t",arr[i]);
    }
}