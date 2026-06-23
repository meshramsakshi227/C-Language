//Convert minutes to hours and minutes.
#include <stdio.h>
int main()
{
    int Total_minutes, Hours, Minutes;
    printf("Enter Total minutes:");
    scanf("%d",&Total_minutes);
    Hours = Total_minutes/60;
    Minutes = Total_minutes % 60;
    printf("Hours = %dhr\n",Hours);
    printf("Minutes = %dmin\n",Minutes);

    return 0;
}