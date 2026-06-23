//Write a program to declare an interger, a pointer to interger, and a pointer to pointer , then print the value uding both *p and **pp.
#include <stdio.h>
int main()
{
    int a = 50;
    int *p = &a;
    int **pp = &p;
    printf("Using *p = %d\n",*p);
    printf("Using **pp = %d\n",**pp);
    return 0;
}