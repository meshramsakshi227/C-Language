//Write a C program to add two 2*2 matrix.
#include <stdio.h>
int main()
{
    int mat1[2][2], mat2[2][2], sum[2][2], i, j;
    printf("Enter the element of 1st 2*2 matrix:\n");
    for(i = 0; i < 2; i++)
    for(j = 0; j < 2; j++)
    scanf("%d", &mat1[i][j]);
    printf("Enter the element of 2nd 2*2 matrix:\n");
    for(i = 0; i < 2; i++)
    for(j = 0; j < 2; j++)
    scanf("%d", &mat2[i][j]);
    for(i = 0; i < 2; i++)
    for(j = 0; j < 2; j++)
    sum[i][j] = mat1[i][j] + mat2[i][j];
    printf("Sum of the matrices:\n");
    for(i = 0; i < 2; i++)
    {
    for(j = 0; j < 2; j++)
    {
        printf("%d",sum[i][j]);
    }
    printf("\n");
    }
    return 0;

}