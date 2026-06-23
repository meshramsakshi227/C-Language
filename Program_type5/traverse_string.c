//Write a program using pointer to traverse a character array(string) until null character.
#include <stdio.h>
int main()
{
    char str[] = "Hello world";
    char *p = str;
    while(*p != '\0')
    {
        printf("%c", *p);
        p++;
    }
    return 0;
}