//Write a program to demonstrate pointer decrement(p--).
#include <stdio.h>
int main()
{
    int arr[4] = {10, 20, 30, 40};
    int *p = &arr[4];
    printf("Address before decrement:%p\n",p);
    p--;
    printf("Address after decrement:%p\n",p);
    return 0;
}