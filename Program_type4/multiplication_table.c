//Write a program using a function to print multiplication table of a number using no argument and with return value.
#include <stdio.h>
int mutiplicationTable();
int main()
{    
    mutiplicationTable();
    int result;
    if (result == 0)
    {
        printf("Multiplcation table printed successfully.\n");
    }
    return 0;
}
int mutiplicationTable()
{
    int num = 5;
    printf("Multiplication table of %d:\n",num);
    for(int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }
    return 0;
}