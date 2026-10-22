#include <stdio.h>
#include <stdlib.h>

/*
///////////////////////////////////////////////////////////////////////
//
// Function Name : CheckEvenOdd
// Description   : It checks whether an integer is even or odd.
// Input         : Integer
// Output        : Even Number or Odd Number
// Author        : Arvind Madhav Baile
// Date          : 22/10/2026
//
///////////////////////////////////////////////////////////////////////
*/
void CheckEvenOdd(int iValue)
{
    if ((iValue % 2) == 0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
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

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}
