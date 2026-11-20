#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

/*
    Function Name : ChkAlpha
    Description   : Accept a character and check whether the character is an alphabet. The condition uses ASCII character ranges.
    Input         : One character.
    Output        : TRUE if it is a {yes}; otherwise FALSE.
    Author        : Arvind Madhav Baile
    Date          : 20/11/2026
*/

BOOL ChkAlpha(char ch)
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is Character \n");
    }
    else
    {
        printf("It is not a Character\n");
    }

    return EXIT_SUCCESS;
}
