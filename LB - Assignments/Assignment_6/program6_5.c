/*
    Function Name : CalculateBonus
    Description    : Calculates employee bonus based on salary and service years.
    Input          : Positive monthly salary and non-negative service years
    Output         : Bonus amount, or Invalid Input
    Author         : Arvind Madhav Baile
    Date           : 22/10/2026
*/

#include <stdio.h>
#include <stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if (fSalary <= 0.0f || iYears < 0)
    {
        printf("Invalid Input\n");
        return;
    }

    if (iYears > 10)
    {
        fBonus = fSalary * 0.15f;
    }
    else if (iYears >= 5)
    {
        fBonus = fSalary * 0.10f;
    }
    else
    {
        fBonus = fSalary * 0.05f;
    }

    printf("Bonus = %.2f\n", fBonus);
}


int main(void)
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and years of service: ");
    if (scanf("%f %d", &fSalary, &iYears) != 2)
    {
        printf("Invalid Input\n");
        return EXIT_FAILURE;
    }

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}
