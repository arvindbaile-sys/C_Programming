#include <stdio.h>

/*
///////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : It prints the specified number of asterisks using an incrementing counter.
// Input         : Integer (number of asterisks)
// Output        : Prints the requested number of *
// Author        : Arvind Madhav Baile
// Date          : 22/10/2026
//
///////////////////////////////////////////////////////////////////////
*/
void Display(int iNo)
{
    int iCnt = 0;

    while (iCnt < iNo)
    {
        printf("* ");
        iCnt++;
    }
    printf("\n");
}

int main(void)
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
