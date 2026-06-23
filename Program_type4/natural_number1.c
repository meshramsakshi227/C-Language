//Write a program using a function with no arguments and no return value to print the first 10 natural number.
#include <stdio.h>
void printNumber();
    int main()
    {
        printNumber();
        return 0;
    }
    void printNumber()
    {
        int i;
        for(i = 1; i <= 10; i++)
        {
            printf("%d ",i);
        }
    }
