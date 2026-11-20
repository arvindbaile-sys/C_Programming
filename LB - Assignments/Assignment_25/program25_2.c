#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

/*
    Function Name : ChkCapital
    Description   : Accept a character and check whether the character is a capital letter. The condition uses ASCII character ranges.
    Input         : One character.
    Output        : TRUE if it is a {yes}; otherwise FALSE.
    Author        : Arvind Madhav Baile
    Date          : 20/11/2026
*/

BOOL ChkCapital(char ch)
{
    if((ch >= 'A' && ch <= 'Z'))
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital Character\n");
    }
    else
    {
        printf("It is not a Capital Character\n");
    }

    return EXIT_SUCCESS;
}
