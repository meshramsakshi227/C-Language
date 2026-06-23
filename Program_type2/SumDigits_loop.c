//Write a C program to find the sum of digits of given number using loops.
#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter the number:");
    scanf("%d",&num);
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    printf("Sum of digits = %d\n",sum);

    return 0;
    
}