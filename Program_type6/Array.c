#include <stdio.h>
struct Student
{
    int rollNo;
};

int main()
{
    struct Student s[3];

    s[0].rollNo = 101;
    s[1].rollNo = 102;
    s[2].rollNo = 103;

    printf("Student Roll Numbers:\n");

    printf("%d\n", s[0].rollNo);
    printf("%d\n", s[1].rollNo);
    printf("%d\n", s[2].rollNo);

    return 0;
}