#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : strlwrs
    Description   : Accept a string and convert all uppercase characters into lowercase. The condition checks the ASCII range 'A' to 'Z'; adding 32 converts the character to lowercase.
    Input         : A string.
    Output        : The modified string in lowercase.
    Author        : Arvind Madhav Baile
    Date          : 20/11/2026
*/

void strlwrs(char *str)
{
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] >= 'A' && str[iCnt] <= 'Z')
        {
            str[iCnt] = str[iCnt] + 32;
        }
        iCnt++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter String : ");
    scanf("%19[^\n]",Arr);

    strlwrs(Arr);

    printf("Modified string is %s\n",Arr);

    return EXIT_SUCCESS;
}
