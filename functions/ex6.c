#include <stdio.h>
int fubonacci(int n){
    int f,a=0,b=1,i;
    for(i=2;i<=n;i++){
        f=a+b;
        a=b;
        b=f;
    }
    return f;
}
int main() 
{
    int n,fubo;
    printf("saisis la valeur de n :");
    scanf("%d",&n);
    fubo=fubonacci(n);
    printf("F(%d)=%d \n",n,fubo);
    
}