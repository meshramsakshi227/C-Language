#include <stdio.h>
struct Student 
{
    int roll;
    char name[20];
};

int main() 
{
    struct Student s[3] = 
    {
        {1, "Sakshi"},
        {2, "Siddhi"},
        {3, "Shreya"}
    };

   int i;
    printf("Student Details:\n");

    for(i = 0; i < 3; i++) {
        printf("Roll: %d  Name: %s\n",
               s[i].roll, s[i].name);
    }

    return 0;
}