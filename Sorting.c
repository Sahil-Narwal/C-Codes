#include <stdio.h>
// To arrange number in accending
int main()
{
    int i, j, n, temp;
    printf("Enter the size of Array:\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the numbers :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The Entered numbers are ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("The sorted array is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}