//Write a menu-driven program to calculate the area of circle, rectangle or triangle.
#include <stdio.h>
#include <math.h>
int main()
{
    int choice;
    while (1)
    {
        printf("---------MENU---------\n");
        printf("1.Circle\n");
        printf("2.Rectangle\n");
        printf("3.Triangle\n");
        printf("4.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);

        if (choice == 1)
        {
            double radius;
            printf("Enter radius of circle:");
            scanf("%lf",&radius);
            printf("Area of the circle is %.2f\n", M_PI* radius * radius);
        }else if(choice == 2)
        {
            double length,breadth;
            printf("Enter length and breadth of rectangle:");
            scanf("%lf %lf",&length,&breadth);
            printf("Area of the rectangle is %.2f\n",length*breadth);
        }else if(choice == 3)
        {
            double base,height;
            printf("Enter base and height of triangle:");
            scanf("%lf %lf",&base,&height);
            printf("Area of the triangle is %.2f\n",0.5*base*height);
        }else if(choice == 4)
        {
            printf("Exiting....................");
            break;
        }else
        {
            printf("Choice not found try again.\n");
        }
    }
    
    return 0; 

}