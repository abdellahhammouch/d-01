#include <stdio.h>

int parité(int n) {
if(n%2==0){
    return 1;
}
else 
    return 0;
}

int main() {
    int n,p;

    printf("Entrez un nobre entier : ");
    scanf("%d",&n); 
    p=parité(n);
    if(p==1){
        printf("le nombre que vous avez entrer est pair \n");
    }
    else
        printf("le nombre que vous avez entrer est impair \n");
        
    return 0;
}