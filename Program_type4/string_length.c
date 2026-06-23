//Write a program to find the length of a string using strlen().
#include <stdio.h>
#include <string.h>
int main()
{
    char str[10];
    printf("Enter a string:");
    scanf("%s",str);
    int length = strlen(str);
    printf("length of string is %d",length);
    return 0;
}