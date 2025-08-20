#include <stdio.h>

int main()
{
    int a,b,c,num;
    printf("Enter numbers to compare : ");
    scanf("%d,%d,%d",&a,&b,&c);
    if((a==b)&&(b==c)&&(c==a))
    {
        printf("All three numbers are equal.");
    }
    else
        num=(a>b)?((a>c)?((b>c)?printf("%d>%d>%d",a,b,c):printf("%d>%d>%d",a,c,b)):printf("%d>%d>%d",c,a,b)):((a>c)?printf("%d>%d>%d",b,a,c):printf("%d>%d>%d",c,b,a));

    return 0;
}
