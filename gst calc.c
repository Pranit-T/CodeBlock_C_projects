#include <stdio.h>
#include <math.h>

int main()
{
    float gst,o_amt,t_amt,gst_amt;

    printf("Enter orignal amount: ");
    scanf("%f",&o_amt);
    if (o_amt<=0)
        printf("Invalid Input");
    else
    {
    printf("Enter gst%(between 0%% to 28%%): ");
    scanf("%f",&gst);
    if (gst<0 || gst>28)
        printf("Invalid Input");
    else {

    gst_amt=(gst/100)*o_amt;
    t_amt=o_amt+gst_amt;

    printf("\nTotal Amount Breakdown\n\n");
    printf("Original Amount: %f\n",o_amt);
    printf("GST: %f\n",gst);
    printf("GST Amount: %f\n",gst_amt);
    printf("Total Amount: %f\n",t_amt);

    }
    }
    return 0;
}
