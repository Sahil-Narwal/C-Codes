#include <stdio.h>
// To print the largest and smallest number from a group of numbers`
int main()
{
    int n, i, max, min;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    n=n--;
    int a[n];
    printf("Enter the elements of array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    min = max = a[0];
    for (i = 0; i < n; i++)
    {
        if (max < a[i])

            max = a[i];
        if (min > a[i])

            min = a[i];
    }
    printf("Largest number in array is: %d\n", max);
    printf("Smallest number in array is: %d\n", min);
}