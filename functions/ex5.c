#include <stdio.h>
int factoriel(int n){
    int f=1,i;
    for(i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}
int main() 
{
    int n,fact;
    printf("saisis la valeur de n :");
    scanf("%d",&n);
    fact=factoriel(n);
    printf("%d != %d",n,fact);
    
}