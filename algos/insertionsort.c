#include <stdio.h>

void main()
{
    int n, i, j, k, cmp, key, t, temp;
    printf("saisis la taille du tableau :\n");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("sasis l'element %d :", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("le tableau avant le trier : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        if (key < arr[i - 1])
        {
            cmp=i;
            for (j = i - 1; j >= 0; j--)
            {
                if (key < arr[j])
                {
                    arr[j + 1] = arr[j];
                    cmp--;
                }
            }
            arr[cmp] = key;
        }
    }
    printf("\nle tableau trié est : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
}