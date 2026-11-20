#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : strtogglex
    Description   : Accept a string and toggle the case of each alphabet. Uppercase letters are converted by adding 32 and lowercase letters by subtracting 32.
    Input         : A string.
    Output        : The modified string with toggled character cases.
    Author        : Arvind Madhav Baile
    Date          : 20/11/2026
*/

void strtogglex(char *str)
{
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] >= 'A' && str[iCnt] <= 'Z')
        {
            str[iCnt] = str[iCnt] + 32;
        }
        else if(str[iCnt] >= 'a' && str[iCnt] <= 'z')
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

    strtogglex(arr);

    printf("Modified string is %s\n",arr);

    return EXIT_SUCCESS;
}
