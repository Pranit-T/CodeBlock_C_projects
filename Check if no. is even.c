#include <stdio.h>

int main()
{
    int num;                        //Variable type declared
    printf("Enter your number : ");
    scanf("%d",&num);               //User input taken
    if (num<=0)                    //if statement starts
        printf("INVALID INPUT");
        else if (num%2==0)        //nested if else starts
            printf("Number is Even");
        else
            printf("Number is odd");



    return 0;
}
