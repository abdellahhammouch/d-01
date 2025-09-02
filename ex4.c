#include <stdio.h>

int main() {
    int n,f=0,i;
    printf("saisis un nombre entier");
    scanf("%d",&n);
    f=n*2;
     for(i=1;i<f;i=i+2){
        printf("%d , ",i);
    }
    
}