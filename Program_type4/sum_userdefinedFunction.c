//Write a program to find the sum of two numbers using a user-defined function(with parameters and return value).
#include <stdio.h>
int add(int a, int b);
int main()
{
    int num1, num2, sum;
    printf("Enter two number:");
    scanf("%d%d", &num1, &num2);
    sum = add(num1, num2);
    printf("The sum of the %d and %d is %d\n", num1, num2, sum);
    return 0;
}
int add(int a, int b)
{
  return a + b;
}