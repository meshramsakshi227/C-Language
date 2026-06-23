//Write a C program to calculate the sum of element in a 1D array.
#include <stdio.h>
int main()
{   
    int n, sum = 0;
    printf("Enter number of elememt:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d number of element:",n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("Sum of array element = %d\n",sum);
    
    return 0;

}