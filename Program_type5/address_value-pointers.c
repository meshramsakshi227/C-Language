//Write a program to demonstrate the concept of pointers by printing the address and value of a variable.
#include <stdio.h>
int main()
{
    int a = 10;
    printf("Value of a = %d\n",a);
    printf("Address of a = %p\n",&a);
    return 0;
}