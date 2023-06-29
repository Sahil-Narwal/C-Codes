#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
// To count number of spaces characters tabs and enters in a file
int main()
{
    FILE *fp;
    char ch;
    int noc = 0, nos = 0, not = 0, nonw = 0;
    fp = fopen("data.txt", "r");
    if (fp == NULL)
    {
        printf("\nUnable to open file");
        exit(0);
    }

    while (ch != EOF)
    {
        ch = fgetc(fp);
        noc++;
        if (ch == ' ')
            nos++;
        if (ch == '\t')
            not ++;
        if (ch == '\n')
            nonw++;
    }
    fclose(fp);
    printf("\nNumber of characters : %d", noc);
    printf("\nNumber of spaces     : %d", nos);
    printf("\nNumber of tabs       : %d", not );
    printf("\nNumber of newlines   : %d", nonw);
    return 0;
}