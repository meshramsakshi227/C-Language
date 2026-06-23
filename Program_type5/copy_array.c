//Write a program to copy one array to another using pointer.
#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int b[5];
    int *p = a;
    int *q = b;
    int i;
    for(i = 0; i < 5; i++) 
    {
        *q = *p;
        p++;
        q++;
    }
    printf("Copied array:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", b[i]);
    }
    
    return 0;
}