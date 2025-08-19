#include <stdio.h>


int main(){

    //C program to check whether the triangle is equilateral, isosceles or scalene triangle.
    int a,b,c;
    printf("Enter Sides for Triangle : ");
    scanf("%d,%d,%d",&a,&b,&c);
    if((a+b<=c)||(b+c<=a)||(a+c<=b)||(a<=0)||(b<=0)||(c<=0))
    {
        printf("Invalid Input !");
    }
    else if((a==b)&&(b==c))
    {
        printf("Triangle is Equilateral.");
    }

    else if((a==b)||(b==c)||(c==a))
        {

            printf("Triangle is isosceles.");

        }
         else printf("Triangle is Scalene.");



    return 0;
}
