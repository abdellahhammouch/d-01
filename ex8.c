#include <stdio.h>

int main() {
    int n,a=0,b=1,c,i;
    printf("saisis le nombre n de la suite :");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
        printf("F(%d)=%d \n",i,c);
    }
}