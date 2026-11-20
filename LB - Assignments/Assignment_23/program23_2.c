#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : struprx
    Description   : Accept a string and convert all lowercase characters into uppercase. The condition checks the ASCII range 'a' to 'z'; subtracting 32 converts the character to uppercase.
    Input         : A string.
    Output        : The modified string in uppercase.
    Author        : Arvind Madhav Baile
    Date          : 20/11/2026
*/

void struprx(char *str)
{
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] >= 'a' && str[iCnt] <= 'z')
        {
            str[iCnt] = str[iCnt] - 32;
        }
        iCnt++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%19[^\n]",arr);

    struprx(arr);

    printf("Modified string is %s\n",arr);

    return EXIT_SUCCESS;
}
