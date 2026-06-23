//Write a program to compare two string using strcmp().
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[60], str2[80];
    printf("Enter first string:");
    gets(str1);
    printf("Enter second string:");
    gets(str2);
    int result = strcmp(str1, str2);
    if (result == 0)
    printf("string are equal.\n");
    else if(result < 0)
    printf("first string in less then second string.");
    else 
    printf("first string is greater than the second string.\n");
    return 0;
}
