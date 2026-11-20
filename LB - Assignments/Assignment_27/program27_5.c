#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : Reverse
    Description   : Accept a string and reverse it in place.
                    Two indexes are used to swap characters
                    from the beginning and end of the string.
    Input         : String.
    Output        : Reversed string.
    Author        : Arvind Madhav Baile
    Date          : 20/11/2026
*/

void Reverse(char *str)
{
    int iStart = 0;
    int iEnd = 0;
    char ch = '\0';

    // Find the length of the string
    while(str[iEnd] != '\0')
    {
        iEnd++;
    }

    iEnd--;

    // Reverse the string by swapping characters
    while(iStart < iEnd)
    {
        ch = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = ch;

        iStart++;
        iEnd--;
    }
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%19[^\n]",arr);

    Reverse(arr);

    printf("Modified string is %s\n",arr);

    return EXIT_SUCCESS;
}