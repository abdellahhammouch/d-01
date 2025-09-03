#include <stdio.h>

int main() {
    float t;
    printf("saisis la valeur du température :");
    scanf("%f",&t);
    if(t<0){
        printf("l'eau est solide");
    }
    else if(t>=0 && t<100){
        printf("l'eau est liquide");
    }   else
            printf("l'eau est gaz");
}