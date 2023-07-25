#include <stdio.h>
#include <stdlib.h>
// Dynamic memory allocation (realloc)
int main()
{
    int *ptr;
    int i, n, m;
    printf("Enter the size of memory you want to allocate:\n");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
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
    printf("Enter the size of memory want to realocate\n");
    scanf("%d", &m);
    ptr = realloc(ptr, m);
    printf("Enter %d numbers:\n", m);
    for (i = 0; i < m; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("The entered numbers are:\n");
    for (i = 0; i < m; i++)
    {
        printf("%d\n", ptr[i]);
    }
    return 0;
}