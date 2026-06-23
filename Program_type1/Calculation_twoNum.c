//Add, subtract, Multiple, Divide two number.
#include <stdio.h>
int main()
{
    float a,b;
    float Div;
    printf("Enter 2 number:");
    scanf("%f %f",&a,&b);
    printf("Addition:%f\n",a+b); 
    printf("Subtraction:%f\n",a-b); 
    printf(":Multiplication:%f\n",a*b); 
    printf("Division:%.4f\n",a/b); 

    return 0;
}