#include <stdio.h>
//
int main()
{
    int i, j, size, temp;

    printf("Enter the size of array : ");
    scanf("%d", &size);
    int a[size];

    printf("Enter the elements of array:\n");

    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {

            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sorted array is\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }

    printf("\nThe smallest element is %d\n", a[0]);
    printf("The largest element is %d\n", a[size - 1]);

    return 0;
}