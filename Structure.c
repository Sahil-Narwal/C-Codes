#include <stdio.h>
//
struct student
{
    int marks;
    int rollno;
    char name[20];
};
int main()
{
    struct student s1;
    printf("Enter the name of the student\n");
    scanf("%s", s1.name);

    printf("Enter the roll number of the student\n");
    scanf("%d", &s1.rollno);

    printf("Enter the marks of the student\n");
    scanf("%d", &s1.marks);

    printf("The name of the student is %s", s1.name);
    printf("The roll number of the student is %d", s1.rollno);
    printf("The marks of the student is %d", s1.marks);
    return 0;
}