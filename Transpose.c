#include <stdio.h>
int main()
{
    int A[3][3], r, c;
    printf("Enter elements of first 3*3 matrix: \n");
    for (r = 0; r < 3; r++)
        for (c = 0; c < 3; c++)
        {
            scanf("%d", &A[r][c]);
        }
    printf("\nThe transpose of matrics : \n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("%d\t", A[c][r]);
        }
        printf("\n");
    }
    return 0;
}
