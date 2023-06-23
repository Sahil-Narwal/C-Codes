#include <stdio.h>
#include <string.h>
//
int main()
{
    char nm1[20], nm2[20], nm3[20];
    printf("Enter the first name\n");
    gets(nm1);
    printf("Enter the second name\n");
    gets(nm2);

    // Lenth of a string
    printf("Lenth of %s is ; %d\n", nm1, strlen(nm1));

    // Copy of a string
    printf("Copy of %s is %s\n", nm2, strcpy(nm3, nm2));

    // String Comparison
    printf("Compare %s to %s\n", nm1, nm2);
    if (strcmp(nm1, nm2) != 0)
        printf("Different\n");
    else
        printf("Same\n");

    // Uppercase lowercase
    printf("Uppercase %s is %s\n", nm1, strupr(nm1));

    printf("Lowercase %s is %s\n", nm2, strlwr(nm2));

    // string concatination
    strcat(nm1, nm2);
    printf("Concatinates string %s\n", nm1);

    // reverse of a string
    printf("reverse of %s is %s\n", nm1, strrev(nm1));

    return 0;
}