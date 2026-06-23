//Write a program to show how pointer addition (p + i)accesses different element of an array.
#include <stdio.h>
int main()
{
    int a[2];
    int *p1 = &a[1];
    int *p2 = &a[9];
    printf("Difference = %ld\n", p2 - p1);
    return 0;
}