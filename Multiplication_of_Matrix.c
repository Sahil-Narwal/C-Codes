#include <stdio.h>
int main()
{
    int nor1, noc1, nor2, noc2;
    printf("Enter the number of rows and columns for the first matrix\n");
    scanf("%d%d", &nor1, &noc1);
    printf("Enter the number of rows and columns for the second matrix\n");
    scanf("%d%d", &nor2, &noc2);

    if (noc1 != nor2)
    {
        printf("Error: The number of columns in the first matrix must be equal to the number of rows in the second matrix\n");
        return 0;
    }
    
    int a[nor1][noc1], b[nor2][noc2], C[nor1][noc2], r, c, k;
    printf("Enter elements of first matrix: \n");
    for (r = 0; r < nor1; r++)
        for (c = 0; c < noc1; c++)
        {
            scanf("%d", &a[r][c]);
        }
    printf("Enter elements of second matrix: \n");
    for (r = 0; r < nor2; r++)
        for (c = 0; c < noc2; c++)
        {
            scanf("%d", &b[r][c]);
        }
    printf("\nThe multiplication of two matrices : \n");
    for (r = 0; r < nor1; r++)
    {
        for (c = 0; c < noc2; c++)
        {
            C[r][c] = 0;
            for (k = 0; k < noc1; k++)
            {
                C[r][c] = C[r][c] + (a[r][k] * b[k][c]);
            }
            printf("%d\t", C[r][c]);
        }

        printf("\n");
    }
    return 0;
}
