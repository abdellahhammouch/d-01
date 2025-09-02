#include <stdio.h>

int main() {
    int n,f=0,i;
    printf("saisis un nombre entier");
    scanf("%d",&n);
     for(i=1;i<=n;i++){
        f=f+i;
    }
    for(i=1;i<n;i++){
        printf("%d + ",i);
    }
    printf("%d = %d",n,f);
    
}
