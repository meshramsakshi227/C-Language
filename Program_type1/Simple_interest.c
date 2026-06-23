//Calculate simple intrest.
#include <stdio.h>
int main()
{
    float P, R, T, Simple_intrest;
    printf("Enter Principal, Rate, Time:");
    scanf("%f %f %f", &P, &R, &T);
    Simple_intrest = (P*R*T)/100;
    printf("Simple interst is %f",Simple_intrest);

    return 0;
}