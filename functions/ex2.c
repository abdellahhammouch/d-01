#include <stdio.h>
int multipl(int a,int b){
    int mul; 
    mul=a+b;
    return mul;
}
int main() 
{
    int a,b,multi;
    printf("saisis la valeur de a :");
    scanf("%d",&a);
    printf("saisis la valeur de b :");
    scanf("%d",&b);
    multi=multipl(a,b);
    printf("%d*%d=%d",a,b,multi);
    
}