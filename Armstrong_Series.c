#include <stdio.h>
// To find armstrong number till a specific number is reached
int main()
{
    int i;
    long int n, m, remainder, cube;
    printf("Enter the number : ");
    scanf("%ld", &n);

    for (i = 1; i <= n; i++)
    {
        m = i;
        cube = 0;
        while (m > 0)
        {
            remainder = m % 10;
            cube = cube + (remainder * remainder * remainder);
            m = m / 10;
        }
        if (i == cube)
        {
            printf("%ld\t", cube);
        }
    }
    return 0;
}