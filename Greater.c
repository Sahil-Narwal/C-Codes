#include <stdio.h>
//To print the largest and smallest number from a group of numbers`
int main()
{
    int a[5], i, max, min;
    printf("Enter 5 elements of array:\n");
    for (i = 0; i < 5; i++)

        scanf("%d", &a[i]);
    min = max = a[0];
    for (i = 0; i < 5; i++)
    {
        if (max < a[i])

            max = a[i];
        if (min > a[i])

            min = a[i];
    }

    printf("Largest number in array is: %d\n", max);
    printf("Smallest number in array is: %d\n", min);
}