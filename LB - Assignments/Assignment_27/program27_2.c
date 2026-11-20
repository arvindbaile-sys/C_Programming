#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : CountSmall
    Description   : Accept a string and count small characters. The condition checks the ASCII range 'a' to 'z'.
    Input         : A string.
    Output        : Number of small characters.
    Author        : Arvind Madhav Baile
    Date          : 20/11/2026
*/

int CountSmall(char *str)
{
    int iCnt = 0;
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%19[^\n]",arr);

    iRet = CountSmall(arr);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}
