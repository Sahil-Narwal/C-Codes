#include <stdio.h>
// Programm of structure using arrays
struct student
{
    char name[50];
    int rollno;
};
int main()
{
    int num, i;
    printf("Enter how many students you want to enter: ");
    scanf("%d", &num);
    struct student s[num];
    for (i = 0; i < num; i++)
    {
        printf("Student Name: ");
        scanf("%s", s[i].name);

        printf("Student Roll No: ");
        scanf("%d", &s[i].rollno);
    }
    printf("\nThe data is :\n");
    for (i = 0; i < num; i++)
    {
        printf("Student Name: %s\n", s[i].name);
        printf("Student Roll No: %d\n", s[i].rollno);
    }

    return 0;
}
