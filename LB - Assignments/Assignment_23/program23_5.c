#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : CountWhite
    Description   : Accept a string and count the white space characters. Each occurrence of the space character ' ' increases the counter by one.
    Input         : A string.
    Output        : Number of white spaces in the string.
    Author        : Arvind Madhav Baile
    Date          : 20/11/2026
*/

int CountWhite(char *str)
{
    int iCnt = 0;
    int iCount = 0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ' ')
        {
            iCount++;
        }
        iCnt++;
    }

    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%19[^\n]",arr);

    iRet = CountWhite(arr);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}
