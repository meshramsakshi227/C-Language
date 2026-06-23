//Perimetre of rectangle.
#include <stdio.h>
int main()
{
    int length,breadth;
    printf("Enter length:");
    scanf("%d",&length);
    printf("Enter breadth:");
    scanf("%d",&breadth);
    printf("Perimeter of rectangle is %d", 2 * (length + breadth));
    return 0;

}