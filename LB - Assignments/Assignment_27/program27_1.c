#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : CountCapital
    Description   : Accept a string and count capital characters. The condition checks the ASCII range 'A' to 'Z'.
    Input         : A string.
    Output        : Number of capital characters.
    Author        : Arvind Madhav Baile
    Date          : 20/11/2026
*/

int CountCapital(char *str)
{
    int iCnt = 0;
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
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

    iRet = CountCapital(arr);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}
