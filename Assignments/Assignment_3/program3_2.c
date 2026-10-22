#include <stdio.h>

/*
///////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayFactor
// Description   : It prints the proper factors of a number, excluding the number itself.
// Input         : Integer
// Output        : Prints factors from 1 up to half the absolute value
// Author        : Arvind Madhav Baile
// Date          : 22/10/2026
//
///////////////////////////////////////////////////////////////////////
*/
void DisplayFactor(int iNo)
{
    int i = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    if (iNo == 0)
    {
        printf("Factors are undefined for 0\n");
        return;
    }

    for (i = 1; i <= iNo / 2; i++)
    {
        if ((iNo % i) == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}


int main(void)
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;
}
