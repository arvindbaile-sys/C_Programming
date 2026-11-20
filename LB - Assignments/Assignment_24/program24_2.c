#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : CountChar
    Description   : Accept a string and a character and count how many times the character occurs. The equality condition increments the frequency counter.
    Input         : A string and one character.
    Output        : Frequency of the given character.
    Author        : Arvind Madhav Baile
    Date          : 20/11/2026
*/

int CountChar(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
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

    iRet = CountChar(arr,cValue);

    printf("Character frequency is %d\n",iRet);

    return EXIT_SUCCESS;
}
