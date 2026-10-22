#include <stdio.h>
#include <stdlib.h>

/*
///////////////////////////////////////////////////////////////////////
//
// Function Name : CheckNumber
// Description   : It checks whether a number is positive, negative, or zero.
// Input         : Integer
// Output        : Positive Number, Negative Number, or Zero
// Author        : Arvind Madhav Baile
// Date          : 22/10/2026
//
///////////////////////////////////////////////////////////////////////
*/
void CheckNumber(int iValue)
{
    if (iValue > 0)
    {
        printf("Positive Number\n");
    }
    else if (iValue < 0)
    {
        printf("Negative Number\n");
    }
    else
    {
        printf("Zero\n");
    }
}


int main(void)
{
    int iValue = 0;

    printf("Enter a number: ");
    if (scanf("%d", &iValue) != 1)
    {
        printf("Invalid input\n");
        return EXIT_FAILURE;
    }

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}
