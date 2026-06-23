//Write a C program to search in an array using linear search.
#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 7;
    int found = 0;
    int index = -1;
    for(int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            found = 1;
            index = i;
            break;
        }
    }
    if (found)
    {
        printf("Element %d found at index %d\n",key, index);
    }
    else
    {
        printf("Element %d not found in array\n",key);
    }
    return 0;
    
}
