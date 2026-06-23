//Write a program to copy one string to another usung strcpy().
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "Hello world!";
    char str2[50];
    strcpy(str2, str1);
    printf("string str1 : %s\n",str1);
    printf("string str2 after strcpy : %s\n",str2);
    return 0;
}