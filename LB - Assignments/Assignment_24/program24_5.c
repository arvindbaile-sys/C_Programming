#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : StrRevX
    Description   : Accept a string and reverse it in place. Two indexes move from the beginning and end, swapping characters until they meet.
    Input         : A string.
    Output        : The modified string in reverse order.
    Author        : Arvind Madhav Baile
    Date          : 20/11/2026
*/

void StrRevX(char *str)
{
    int iStart = 0;
    int iEnd = 0;
    char ch = '\0';

    while(str[iEnd] != '\0')
    {
        iEnd++;
    }
    iEnd--;

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

    printf("Enter string : ");
    scanf("%19[^\n]",arr);

    StrRevX(arr);

    printf("Modified string is %s\n",arr);

    return EXIT_SUCCESS;
}
