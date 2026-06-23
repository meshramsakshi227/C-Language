//Write a C program to check whether a person is child, teenager, adult.
#include <stdio.h>
int main()
{
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    if(age<13)
    {
        printf("The person is child.\n");
    }else
    {
        if(age>=13 && age<=19)
        {
            printf("The person is Teenager.\n");
        }else
        {
            printf("The person is Adult.\n");
        }
    }
    return 0;
}