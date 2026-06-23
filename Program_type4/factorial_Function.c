//Write a program to find factorial of a number using a function.
#include <stdio.h>
int factorial(int n);
int main()
{
    int num, result;
    printf("Enter a number:");
    scanf("%d",&num);
    result = factorial(num);
    printf("Factorial of %d is %d", num, result);
    return 0;
}
int factorial(int n)
{
    int i, fact = 1;
    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}