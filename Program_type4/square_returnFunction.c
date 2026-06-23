//Write a program to calculate the square of a number using a function (return type function).
#include <stdio.h>
int square(int num)
{
    return num * num;
}
int main()
{
    int number, result;
    printf("Enter the number:");
    scanf("%d",&number);
    result = square(number);
    printf("The square of %d is %d\n", number, result);
    return 0;
}