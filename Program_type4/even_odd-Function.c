//Write a program using function to check whether a number is even or odd.
#include <stdio.h>
void checkEvenOdd(int num);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    checkEvenOdd(n);
    return 0;
}
void checkEvenOdd(int num)
{
    if(num % 2 == 0)
    printf("The number is Even");
    else
    printf("The number is odd");
}