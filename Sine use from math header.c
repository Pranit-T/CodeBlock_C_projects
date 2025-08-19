#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    float a,b;
    printf("Enter angle : ");
    scanf("%f",&a);

    printf("Select a function from below.\n\n");
    printf("1. Sine\n");
    printf("2. Cosine\n");
    printf("3. Tangent\n");

    printf("\nEnter your choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        b=sin(a*(3.14159265358979323846/180));
        printf("Sin(%f) is %f.",a,b);
        break;
    case 2:
        b=cos(a*(3.14159265358979323846/180));
        printf("cos(%f) is %f.",a,b);
        break;
    case 3:
        b=tan(a*(3.14159265358979323846/180));
        printf("tan(%f) is %f.",a,b);
        break;

    }



    return 0;
}
