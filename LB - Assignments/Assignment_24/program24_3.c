#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : FirstChar
    Description   : Accept a string and a character and return the index of its first occurrence. The loop returns the current index when a match is found; -1 means not found.
    Input         : A string and one character.
    Output        : Index of first occurrence, or -1 if absent.
    Author        : Arvind Madhav Baile
    Date          : 20/11/2026
*/

int FirstChar(char *str, char ch)
{
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
            return iCnt;
        }
        iCnt++;
    }

    return -1;
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

    iRet = FirstChar(arr,cValue);

    printf("Character location is %d\n",iRet);

    return EXIT_SUCCESS;
}
