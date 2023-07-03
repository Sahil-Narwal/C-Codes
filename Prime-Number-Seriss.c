#include <stdio.h>
// To print series of prime numbers
int main()
{
    int i, r, no, x;
    printf("Enter the number till where you want to get the prime numbers");
    scanf("%d", &no);

    for (i = 2; i <= no; i++)
    {
        int count = 0;
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
            printf("%d\t", i);
        }
    }
}