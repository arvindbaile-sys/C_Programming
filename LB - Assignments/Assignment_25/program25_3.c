#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

/*
    Function Name : ChkDigit
    Description   : Accept a character and check whether the character is a digit. The condition uses ASCII character ranges.
    Input         : One character.
    Output        : TRUE if it is a {yes}; otherwise FALSE.
    Author        : Arvind Madhav Baile
    Date          : 20/11/2026
*/

BOOL ChkDigit(char ch)
{
    if((ch >= '0' && ch <= '9'))
    {
        return TRUE;
    }
    return FALSE;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit\n");
    }
    else
    {
        printf("It is not a Digit\n");
    }

    return EXIT_SUCCESS;
}
