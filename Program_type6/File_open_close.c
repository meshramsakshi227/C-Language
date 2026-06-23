#include <stdio.h>
int main() 
{
    FILE *fp;

    fp = fopen("sample.txt", "w");

    if(fp == NULL) {
        printf("Unable to open file.");
        return 1;
    }

    printf("File opened successfully.");

    fclose(fp);

    printf("\nFile closed successfully.");

    return 0;
}