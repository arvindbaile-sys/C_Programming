#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

/*
    Function Name : ChkChar
    Description   : Accept a string and a character and check whether the character is present. The loop compares each string character with the given character.
    Input         : A string and one character.
    Output        : TRUE if found; otherwise FALSE.
    Author        : Arvind Madhav Baile
    Date          : 20/11/2026
*/

BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

int main()
{
    char arr[20];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter string : ");
    scanf("%19[^\n]",arr);

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character found \n");
    }
    else
    {
        printf("Character not found\n");
    }

    return EXIT_SUCCESS;
}
