#include <stdio.h>
// To reverse any number
int main()
{
    long int n, m, remainder, reverse = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    m = n;
    while (n > 0)
    {
        remainder = n % 10;
        reverse = (reverse * 10) + remainder;
        n = n / 10;
    }

    printf("The reverse of %d is : %d", n, reverse);

    return 0;
}