#include <stdio.h>
// To Check whether a number is prime or not
int prime(int);
int main()
{
    int i;
    printf("Enter the number to check\n");
    scanf("%d", &i);
    prime(i);
}
int prime(int i)
{
    int count = 0, r, x;
    for (x = 1; x <= i; x++)
    {
        r = i % x;
        if (r == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("The number is prime\n");
    }
    else
    {
        printf("The number is not prime\n");
    }
}