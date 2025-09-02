#include <stdio.h>

int main() {
    int n,f,i;
    printf("saisis un nombre entier");
    scanf("%d",&n);
    f=n;
    for(i=1;i<f;i++){
        n=n*i;
    }
    printf("%d != %d ",f,n);
}

