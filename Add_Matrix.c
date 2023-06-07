#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], C[3][3], r, c;
    printf("Enter elements of first 3*3 matrix: \n");
    for (r = 0; r < 3; r++)
        for (c = 0; c < 3; c++)
        {
            scanf("%d", &a[r][c]);
        }
    printf("Enter elements of first 3*3 matrix: \n");
    for (r = 0; r < 3; r++)
        for (c = 0; c < 3; c++)
        {
            scanf("%d", &b[r][c]);
        }
    printf("\nThe addition of two matrics : \n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            C[r][c] = a[r][c] + b[r][c];
            printf("%d\t", C[r][c]);
        }
        printf("\n");
    }
    return 0;
}