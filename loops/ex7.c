#include <stdio.h>

int main() {
    int n,f=0,i;
    printf("saisis un nombre entier");
    scanf("%d",&n);
    while(n!=0){
        f=f*10;
        f=f+n%10;
        n=n/10;
    }
    printf("%d",f);
}