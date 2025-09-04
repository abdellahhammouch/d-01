#include <stdio.h>
int maxi(int a,int b){
    int max;
    if(a>b)
    max=a;
    else
    max=b; 
    return max;
}
int main() 
{
    int a,b,maximum;
    printf("saisis la valeur de a :");
    scanf("%d",&a);
    printf("saisis la valeur de b :");
    scanf("%d",&b);
    maximum=max(a,b);
    printf("Le maximum est %d",maximum);
    
}