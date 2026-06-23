//Evaluate expression.
#include <stdio.h>
int main()
{
    float a, b, c, result;
    printf("Enter 3 number (a, b, c):");
    scanf("%f %f %f", &a, &b, &c);
    result = a+b-c*2/5;
    printf("Result of expresion is %f\n",result);
    return 0;
}