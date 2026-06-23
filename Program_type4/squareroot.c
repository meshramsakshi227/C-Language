//write a program to calculate the square root of a number using sqrt().
#include <stdio.h>
#include <math.h>
int main()
{
    double num, result;
    printf("Enter the number:");
    scanf("%lf",&num);
    if(num < 0)
    {
        printf("Square root of negative number is not defined in real number.\n");
    }
    else
    {
        result = sqrt(num);
        printf("Square root of %.2f is %.2f", num, result);
    }
    return 0;
}