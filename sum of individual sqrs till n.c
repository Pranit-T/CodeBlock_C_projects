#include <stdio.h>
#include <math.h>

int main()
{
    int i,n;
    int sum;
    sum=0;

    printf("Enter number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+pow((i),2);
    }
    printf("The squared summation till %d is %d",n,sum);

    return 0;
}
