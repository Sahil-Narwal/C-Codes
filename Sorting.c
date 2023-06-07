#include <stdio.h>

int main()
{
    int a[5], i, j, temp;
    printf("Enter the five numbers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The entered numbers are:");
    for (i = 0; i < 5; i++)
    {
        printf(" %d  ", a[i]);
    }

    printf("\nSorted array is :\n");
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf(" %d  ", a[i]);
    }
    return 0;
}