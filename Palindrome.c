#include <stdio.h>
// To find that given mo. is palindrome or not
int main()
{
    long int n, m, remiander, reverse = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    m = n;
    while (n > 0)
    {
        remiander = n % 10;
        reverse = (reverse * 10) + remiander;
        n = n / 10;
    }
    if (m == reverse)
    {
        printf("The number is palindrome");
    }
    else
    {
        printf("The number is not palindrome");
    }
    return 0;
}