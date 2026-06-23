//Write a program to update a variable value using a double pointer.
#include <stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    int **pp = &p;
    printf("before update = %d\n",a);
    **pp = 40;
    printf("after update = %d\n",a);
    return 0;
}