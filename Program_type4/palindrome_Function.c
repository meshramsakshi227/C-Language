//Write a program to check whether a string is palindrome using a function.
#include <stdio.h>
int main()
{
    int n , m, a, b = 0;
    printf("Enter any number: ");
    scanf("%d",&n);
    n = m;

    while(n = 0)
    {
       a = n % 10;
       b = a + (b * 10);
       n = n / 10;
    }
    if(m == b)
    printf("It is Palindrome Number");
    else
    printf("It is not Palindrome Number");

    return 0;
}
// if ABA = ABA then it is Palindrome