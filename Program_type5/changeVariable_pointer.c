//Write a program where a pointer is used to change the value of a variable.
#include <stdio.h>
int main()
{
    int a = 5;
    int *p = &a;
    *p = 10;
    printf("Updated value of a = %d",a);
    return 0;
}