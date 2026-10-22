#include <stdio.h>

/*
///////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayEvenFactor
// Description   : It prints the even proper factors of a number.
// Input         : Integer
// Output        : Prints even factors up to half the absolute value
// Author        : Arvind Madhav Baile
// Date          : 22/10/2026
//
///////////////////////////////////////////////////////////////////////
*/
void DisplayEvenFactor(int iNo)
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
        if (((iNo % i) == 0) && ((i % 2) == 0))
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

    DisplayEvenFactor(iValue);

    return 0;
}
