#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
// To edit some text in a file
int main()
{
    FILE *file;
    file = fopen("input.txt", "r");

    char ch;

    if (file == NULL)
    {
        printf("Unable to open file");
        exit(0);
    }
    while (ch != EOF)
    {
        ch = fgetc(file);
        printf("%c", ch);
    }
    fclose(file);

    fopen("input.txt", "w");

    char string[100];

    printf("\nEnter the paragraph you want to enter\n");
    while (fgets(string, 100, stdin) != NULL && strcmp(string, "\n") != 0)
    {
        fputs(string, file);
    }
    fputs(string, file);
    fclose(file);

    fopen("input.txt", "r");

    char ch2;

    if (file == NULL)
    {
        printf("Unable to open file");
        exit(0);
    }
    while (ch2 != EOF)
    {
        ch2 = fgetc(file);
        printf("%c", ch2);
    }

    fclose(file);

    return 0;
}