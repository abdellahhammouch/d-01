#include <stdio.h>

int main() {
    int n,f,i,p;
    printf("saisis la base :");
    scanf("%d",&n);
    printf("saisis l'exposant :");
    scanf("%d",&p);
    f=n;
    for(i=2;i<=p;i++){
        f=f*n;
    }
    printf("%d ^ %d = %d ",n,p,f);
}
