//Write a C program to read and display elements of a 1D array. 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d number of elements:\n",n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array element are:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}