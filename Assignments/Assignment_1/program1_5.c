#include <stdio.h>

/*
///////////////////////////////////////////////////////////////////////
//
// Function Name : Accept
// Description   : It prints the specified number of asterisks.
// Input         : Integer (number of asterisks)
// Output        : Prints the requested number of *
// Author        : Arvind Madhav Baile
// Date          : 22/10/2026
//
///////////////////////////////////////////////////////////////////////
*/
void Accept(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }

    printf("\n");
}


int main(void)
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return 0;
}
