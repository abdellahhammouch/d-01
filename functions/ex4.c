#include <stdio.h>
int maxi(int a,int b){
    int max;
    if(a>b)
    max=b;
    else
    max=a; 
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
    printf("Le minimum est %d",maximum);
    
}
