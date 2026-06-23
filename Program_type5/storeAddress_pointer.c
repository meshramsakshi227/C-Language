//Write a progam to store the address of an integer variable in pointer and print both address and value of a variable.
#include <stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    printf("Value of a = %d\n",*p);
    printf("Address of a = %p\n",p);
    return 0;
}