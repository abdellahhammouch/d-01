#include <stdio.h>


void main()
{

    int n,low=0, i, r, cmp1 = 0, cmp2 = 0, c;
    printf("saisis la dimension du tableau :");
    scanf("%d", &n);
    int t[n], mid = n / 2, s, high=n-1;
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
     while (low <= high) {
        int mid = low + (high - low) / 2;
        if (t[mid] == x)
            cmp1++;

        if (t[mid] < r)
            low = mid + 1;
        else
            high = mid - 1;
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