/*
    Function Name : CalculateDiscount
    Description    : Calculates final purchase amount after slab discount.
    Input          : Purchase amount (float)
    Output         : Payable Amount, or Invalid Amount
    Author         : Arvind Madhav Baile
    Date           : 22/10/2026
*/

#include <stdio.h>
#include <stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if (fAmount < 0.0f)
    {
        printf("Invalid Amount\n");
        return;
    }

    if (fAmount < 1000.0f)
    {
        fDiscount = 0.0f;
    }
    else if (fAmount < 5000.0f)
    {
        fDiscount = 0.10f;
    }
    else
    {
        fDiscount = 0.20f;
    }

    fFinalAmount = fAmount - (fAmount * fDiscount);
    printf("Payable Amount = %.2f\n", fFinalAmount);
}


int main(void)
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    if (scanf("%f", &fAmount) != 1)
    {
        printf("Invalid Amount\n");
        return EXIT_FAILURE;
    }

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}
