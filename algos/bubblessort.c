#include <stdio.h>

void main()
{
    int n, i, j, cmp = 1, t;
    printf("saisis la taille du tableau :\n");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("sasis l'element %d :", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("le tableau avant le trier :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d \t ", arr[i]);
    }
    for (i = 0; i < cmp + i; i++)
    {
        cmp = 0;
        for (j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
                cmp++;
            }
        }
    }
    printf("le tableau trié est :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d \t ", arr[i]);
    }
}