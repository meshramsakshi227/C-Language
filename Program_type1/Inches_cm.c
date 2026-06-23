//Convert inches to meter.
#include <stdio.h>
int main()
{
    float inches,cm;
    printf("Enter length in inches:");
    scanf("%f",&inches);
    cm = inches * 2.54;
    printf("Converted length into centimeter:%f",cm);

    return 0;
} 