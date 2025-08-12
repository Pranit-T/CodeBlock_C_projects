#include <stdio.h>

int main()
{
    //Write a C program to check whether a number is divisible by 5 and 11 or not.

    int num;

    printf("Enter your number : ");

    scanf("%d",&num);

    if(num<=0){
        printf("Invalid Input");
    }
    else if ((num%5==0)&&(num%11==0)){
        printf("%d is divisible by 5 and 11.",num);
    }
        else{ printf("%d is not divisible by 5 and 11.",num);
        }
    return 0;

}
