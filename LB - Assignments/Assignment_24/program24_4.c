#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : LastChar
    Description   : Accept a string and a character and return the index of its last occurrence. The loop updates the result whenever a match is found; -1 means not found.
    Input         : A string and one character.
    Output        : Index of last occurrence, or -1 if absent.
    Author        : Arvind Madhav Baile
    Date          : 20/11/2026
*/

int LastChar(char *str, char ch)
{
    int iCnt = 0;
    int iPos = -1;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
            iPos = iCnt;
        }
        iCnt++;
    }

    return iPos;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string : ");
    scanf("%19[^\n]",arr);

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    iRet = LastChar(arr,cValue);

    printf("Character location is %d\n",iRet);

    return EXIT_SUCCESS;
}
