#include <stdio.h>
struct Student 
{
    int roll;
    char name[30];
    float marks;
};

int main() 
{
    struct Student s = {168, "Sakshi", 99.5};

    printf("Roll No: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}