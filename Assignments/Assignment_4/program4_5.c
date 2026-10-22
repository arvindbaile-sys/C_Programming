#include <stdio.h>
#include <stdlib.h>

/*
///////////////////////////////////////////////////////////////////////
//
// Function Name : CheckDivisibility
// Description   : It checks whether an integer is divisible by 5.
// Input         : Integer
// Output        : Divisible by 5 or Not Divisible by 5
// Author        : Arvind Madhav Baile
// Date          : 22/10/2026
//
///////////////////////////////////////////////////////////////////////
*/
void CheckDivisibility(int iValue)
{
    if ((iValue % 5) == 0)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
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

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}
