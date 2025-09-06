#include <stdio.h>

int main() {
    int v,y;
    printf("saisis la vitesse en km/h :");
    scanf("%d",&v);
    y = v * 0.27778;
    printf("La vitesse en m/s = %d",y);
}