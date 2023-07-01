#include <stdio.h>
// To print fabonic series till a given number is reached
int main()
{
    int first = 0, second = 1, next, max;

    printf("To which max you want to print fabonic series: ");
    scanf("%d", &max);

    printf("The fabonic series is:\n");
    printf("%d\t%d\t", first, second);

    for (int i = 0; i < max; i++)
    {
        next = first + second;
        if (next > max)
        {
            break;
        }
        else
        {
            first = second;
            second = next;
            printf("%d\t", next);
        }
    }

    return 0;
}