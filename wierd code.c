#include <stdio.h>

int main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    if ((n%2==0)&&((n>20)||(n>3)&&(n<6)))
       printf("Not Wierd.\n");

    else printf("wierd.");

    return 0;
}
