//Write a C program to calculate the factorial of number using loop.
#include <stdio.h>
int main()
{
    int num,i;
    double fact = 1;
    printf("Enter a number:");
    scanf("%d",&num);

for(i = 1; i <= num ; i++)
fact *= i;
printf("Factorial = %.0f",fact);

return 0;
}