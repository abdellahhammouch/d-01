#include <stdio.h>
<<<<<<< HEAD

void inverser_chaine(char chaine[]) {
    int i,n=0;
    char a;

    while (chaine[n]!='\0') {
        n++;
    }

    for (i=0;i<n/2;i++) {
        a=chaine[i];
        chaine[i]=chaine[n-1-i];
        chaine[n-1-i]=a;
    }
}

int main() {
    char chaine[100];

    printf("Entrez une chaîne : ");
    scanf("%s", chaine); 
    printf("Votre chaîne : %s\n", chaine);
    inverser_chaine(chaine);
    printf("Votre chaîne inversée : %s\n", chaine);

    return 0;
=======
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
    
>>>>>>> 1f00f2d22f1dff4bb56406e6b5bc64c45fbaff16
}