#include <stdio.h>
int main()
{
    int marks[5], i;
    printf("enter the marks of 5 students\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    printf("The marks of 5 students are\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d\t", marks[i]);
    }
    return 0;
}