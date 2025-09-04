#include <stdio.h>
int inversion(char T[n], intn){
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
    int n,invers;
    printf("saisisla taille du chaine :");
    scanf("%d",&n);
    char T[n];
    invers=inversion(n);
    printf("F(%d)=%d \n",n,invers);
    
}