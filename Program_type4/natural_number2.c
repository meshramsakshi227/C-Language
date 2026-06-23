//Write a program using a function with argument and no return value to print the first 10 natural number.
#include<stdio.h>
void printNumber(int n);
int main()
{
    printNumber(10);
    return 0;
}
void printNumber(int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("%d ",i);
    }
    printf("\n");
}
