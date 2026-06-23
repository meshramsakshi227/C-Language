//Write a program to demonstrate pointer to pointer with string (char).
#include <stdio.h>
int main()
{
    char str[] = "Hello";
    char *p = str;
    char **pp = &p;
    printf("%s\n",*pp);
    return 0;
}