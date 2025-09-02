#include <stdio.h>
#include <math.h>

int main()
{
    float fa,pa,ir,t;
    int n;

    printf("Enter Principle Amount : ");
    scanf("%f",&pa);
    if (pa<=0)
        printf("Invalid Input.");

    printf("Enter Interest Rate : ");
    scanf("%f",&ir);
    if (ir<0)
        printf("Invalid Input.");

    printf("Enter number of times that interest is compounded per year : ");
    scanf("%d",&n);
    if (n<=0)
        printf("Invalid Input.");

    printf("Enter number of years : ");
    scanf("%f",&t);
    if (t<=0)
        printf("Invalid Input.");

    fa = pa*pow((1+(ir/n)),(n*t));

    printf("the amount of money accumulated after %f years, including interest is %f.",t,fa);

    return 0;


}
