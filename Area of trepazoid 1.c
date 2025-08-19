#include <stdio.h>

int main()
{
    int a,b,h,area;

    printf("Enter perpendicular height of Trapeziod : ");
    scanf("%d",&h);

         printf("Enter first side of the Trapezoid : ");
         scanf("%d",&a);

                printf("Enter second side of the Trapezoid : ");
                scanf("%d",&b);

                        area=(a+b)*(h)/2;
                        if(area<=0)
                            printf("Invaid Input!");
                            else
                                 printf("Area of Trapezoid : %d",area);
    return 0;
}
