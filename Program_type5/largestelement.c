//Write a program to find the largest element in an array using pointer notation(*(p + i)).
#include <stdio.h>
int main()
{
    int arr[4] = {10, 20, 30, 40};
    int *p = arr;
    int max = *p;
    for(int i = 1; i < 4; i++)
    {
        if(*(p + i) > max)
        max = *(p + i);
    }
    printf("Largest = %d\n", max);
    return 0;
}