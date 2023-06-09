#include <stdio.h>
// To arrange numbers in accending or decending order
int main()
{
    int i, j, n, temp, choice;
    printf("Enter the size of Array:\n");
    scanf("%d", &n);
    n = n--;
    int a[n];
    printf("In which order you want the series:\n");
    printf("1 Accending\n");
    printf("2 Decending\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
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
        break;

    case 2:
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
                if (a[i] <= a[j])
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

        break;
    default:
        printf("Invalid input");
        break;
    }
    return 0;
}