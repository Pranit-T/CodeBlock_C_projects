#include <stdio.h>
//bubble sort
//ascending & descending
int main ()
{
    int n,i,temp,j,options;
    temp=0;
    printf("Enter number of terms: ");
    scanf("%d",&n);

    int arr[n];

    for (i=0;i<n;i++)
    {
        printf("Enter element: ");
        scanf("%d",&arr[i]);
    }

    printf("Orignal data: ");
    for (i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nOPTIONS\n1.Ascending\n2.Descending");

    printf("\nEnter option: ");
    scanf("%d",&options);

    if(options!=1||options!=2)
    {
        printf("Enter valid value.");
        return 0;
    }

    switch(options){
    case 1:
    {
        for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }

    }
    }
    case 2:
    {
      for(i=0;i<n;i++)
      {
        for(j=0;j<n-i-1;j++)
        {
            if (arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
      }
    }
    }
    printf("\nArranged data: ");
    for (i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
