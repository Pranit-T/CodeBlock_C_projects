#include <stdio.h>

int main()
{
    int a,b,c;

    printf("Enter your first Number : ");
    scanf("%d",&a);

    printf("Enter your second Number : ");
    scanf("%d",&b);

    c=a*b;

    a=(c/a);

    b=(c/b);

    printf("After Interchanging %d,%d",a,b);


    return 0;
}
