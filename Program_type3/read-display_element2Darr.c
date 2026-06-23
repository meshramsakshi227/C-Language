//Write a C program to read and display elements of a 1D array. 
#include <stdio.h>
int main()
{
    int rows, cols;
    printf("Enter number of rows:");
    scanf("%d",&rows);
    printf("Enter number of cols:");
    scanf("%d",&cols);
    int arr[rows][cols];
    printf("Enter element of the %d * %d matrix:\n",rows,cols);
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The %d * %d matrix is:\n", rows, cols);
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;

}