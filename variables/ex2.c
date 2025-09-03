#include <stdio.h>

int main() {
    float f,t;
    printf("saisis la valeur du température en celisuis :");
    scanf("%f",&t);
    f=273.15+t;
    printf("La valeur du température en Kelvin = %f",f);
}