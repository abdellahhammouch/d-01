#include <stdio.h>


void main()
{

    int n,min=0, i, j, r, cmp1 = 0, cmp2 = 0, c;
    printf("saisis la dimension du tableau :");
    scanf("%d", &n);
    int t[n], mid = n / 2, s, max=n-1;
    for (i = 0; i < n; i++)
    {
        printf("sasis l'element %d :", i + 1);
        scanf("%d", &t[i]);
    }
    printf("saisis la valeur que vous voulez rechercher : \n");
    scanf("%d", &r);
    for (i = 0; i < cmp2 + i; i++)
    {
        cmp2 = 0;
        for (j = 0; j < n - 1; j++)
        {
            if (t[j] > t[j + 1])
            {
                c = t[j];
                t[j] = t[j + 1];
                t[j + 1] = c;
                cmp2++;
            }
        }
    }
     while (min <= max) {
        int mid = min + (max - min) / 2;
        if (t[mid] == r ){
            cmp1++;
        }
        if (t[mid] < r)
            min = mid + 1;
        else
            max = mid - 1;
    }
    if (cmp1 > 0)
    {
        printf("la valeur que vous avez saisis est dans le tableau");
    }
    else
    {
        printf("la valeur que vous avez saisis n'est pas dans le tableau ");
    }
}