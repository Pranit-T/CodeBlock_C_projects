#include <stdio.h>
#include <math.h>

int main(){

    float a,b,x,y,dist,num;

    printf("Enter x & y coordinate of first point : ");/*use %f format specifier for float variables.
                                                         use %lf for double variables.*/
    scanf("%f,%f",&a,&b);

    printf("Enter x & y coordinate of second point : ");
    scanf("%f,%f",&x,&y);

    dist=sqrt(pow((x-a),2)+pow((y-b),2));
    printf("Distance between given point is : %f",dist);

    return 0;
}
