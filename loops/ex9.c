#include <stdio.h>

int main() {
    int n,f=0,i;
    printf("saisis un nombre entier");
    scanf("%d",&n);
    while(n!=0){
        n=n/10;
        i++;
    }
    printf("%d",i);
}