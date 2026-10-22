#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

/*
///////////////////////////////////////////////////////////////////////
//
// Function Name : Check
// Description   : It checks whether a number is divisible by 5.
// Input         : Integer
// Output        : TRUE if divisible by 5, otherwise FALSE
// Author        : Arvind Madhav Baile
// Date          : 22/10/2026
//
///////////////////////////////////////////////////////////////////////
*/

BOOL Check(int iNo)
{
    if ((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}


int main(void)
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if (bRet == TRUE)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }

    return 0;
}
