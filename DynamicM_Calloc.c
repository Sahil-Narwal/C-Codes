#include <stdio.h>
#include <stdlib.h>
// Dynamic memory allocation (calloc)
int main()
{
    int *ptr;
    int i, n;
    printf("Enter the size of memory you want to allocate:\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("The entered numbers are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }
    return 0;
}