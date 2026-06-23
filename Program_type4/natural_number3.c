//Write a program using a function with no argument and with return value to print the first 10 natural number.
#include <stdio.h>
int printNumber();
int main()
{
    int result;
    result = printNumber();
    printf("Total number printed:%d",result);
    return 0;
} 
int printNumber()
{
    int i, n = 10;
    for(i = 1; i <= n; i++)
    {
        printf(" %d\n ",i);
    }
    return n;
}