#include <stdio.h>

void main()
{

    int n, i, r, cmp = 0;
    printf("saisis la dimension du tableau :");
    scanf("%d", &n);
    int t[n];
    for (i = 0; i < n; i++)
    {
        printf("sasis l'element %d :", i + 1);
        scanf("%d", &t[i]);
    }
    printf("saisis la valeur que vous voulez rechercher : \n");
    scanf("%d", &r);
    for (i = 0; i < n; i++)
    {
        if (t[i] == r)
        {
            cmp++;
        }
    }
    if (cmp > 0)
    {
        printf("la valeur que vous avez saisis est dans le tableau :");
    }
    else
    {
        printf("la valeur que vous avez saisis n'est pas dans le tableau :");
    }
}