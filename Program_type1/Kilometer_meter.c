//Convert kilometres to meters.
#include <stdio.h>
int main()
{
    float km,m;
    printf("Enter distance in kilometer:");
    scanf("%f",&km);
    m = km * 1000;
    printf("Converted distance into meter is %f",m);

    return 0;
}