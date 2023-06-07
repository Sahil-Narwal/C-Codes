#include <stdio.h>
// Swapping of two numbers
int main()
{
    int a, b, temp;
    printf("Enter the numbers:");
    scanf("%d,%d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("The swapping:%d,%d", a, b);
    return 0;
}