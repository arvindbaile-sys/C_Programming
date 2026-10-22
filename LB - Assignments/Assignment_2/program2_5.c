#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;


BOOL ChkEven(int iNo)
{
    if ((iNo % 2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

/*
///////////////////////////////////////////////////////////////////////
//
// Function Name : main
// Description   : It accepts a number and displays whether it is even or odd.
// Input         : Integer entered by the user
// Output        : Even or odd message
// Author        : Arvind Madhav Baile
// Date          : 22/10/2026
//
///////////////////////////////////////////////////////////////////////
*/
int main(void)
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number\n");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if (bRet == TRUE)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }

    return 0;
}
