#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : DisplayDigit
    Description   : Accept a string and display only the digit characters. The condition checks the ASCII range '0' to '9'.
    Input         : A string.
    Output        : Only the digit characters from the string.
    Author        : Arvind Madhav Baile
    Date          : 20/11/2026
*/

void DisplayDigit(char *str)
{
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] >= '0' && str[iCnt] <= '9')
        {
            printf("%c",str[iCnt]);
        }
        iCnt++;
    }
    printf("\n");
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%19[^\n]",arr);

    DisplayDigit(arr);

    return EXIT_SUCCESS;
}
