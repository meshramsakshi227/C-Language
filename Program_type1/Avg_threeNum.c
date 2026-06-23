//Calculate average of three number.
#include <stdio.h>
int main()
{
    float Avg;
    float a,b,c;
    printf("Enter 3 number:");
    scanf("%f %f %f",&a,&b,&c);
    Avg=(a+b+c)/3;
    printf("Average of 3 number is %.4f\n",Avg);

    return 0;
}