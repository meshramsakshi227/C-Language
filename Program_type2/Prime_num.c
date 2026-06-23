//Write a C program to print all prime number between 1 and n using loops.
#include <stdio.h>
int main()
{
    int N, i, j;
    printf("Enter value of N:");
    scanf("%d",&N);
    printf("Prime number between 1 and %d are:\n",N);
    for(i = 2; i <= N; i++)
    {
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j > i/2)
        {
            printf("%d ",i);
        }
    }
    return 0;
}