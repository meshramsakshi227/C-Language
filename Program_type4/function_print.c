//Write a program to demonstrate the need of functions by creating a function that prints a greeting message.
#include <stdio.h>
void greet(void);
int main()
{
    greet();
    return 0;
}
void greet(void)
{
    printf("Hello! Have a nice day!\n");
}