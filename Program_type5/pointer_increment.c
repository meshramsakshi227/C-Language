//Write a program to demonstrate pointer increment(p++)and print the change in address.
#include <stdio.h>
int main()
{
    int arr[4] = {10, 20, 30, 40};
    int *p = &arr[4];
    printf("Address before increment:%p\n",p);
    p++;
    printf("Address after increment:%p\n",p);
    return 0;
}