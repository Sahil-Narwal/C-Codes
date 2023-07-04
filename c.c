#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fp;
    char nm[10];
    fp = fopen("data.txt", "w");
    if (fp == NULL)
    {
        printf("\n unable to open the source");
        exit(0);
    }
    printf("enter your lines\n");
    while (strlen(gets(nm)) > 0)
    {

        fputs(nm, fp);
        fputs("\n", fp);
    }
    fclose(fp);
    return 0;
}
