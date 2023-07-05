#include <stdio.h>
// To find that given mo. is armstrong or not
int main()
{
    long int n, m, remiander = 0, cube = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    m = n;

    while (n > 0)
    {
        remiander = n % 10;
        cube = cube + (remiander * remiander * remiander);
        n = n / 10;
    }
    if (m == cube)
    {
        printf("The number is Armstrong");
    }
    else
    {
        printf("The number is not Armstrong");
    }
    return 0;
}